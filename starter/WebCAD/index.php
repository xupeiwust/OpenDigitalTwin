
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>OpenCAXPlus</title>
    <meta charset="utf-8">
  </head>
  <body>
    <h1>Modeling Based Definition</h1>

    
    <?php
     echo exec("./build/oceSolver");
    ?>

    <script type="module">


      
      import * as THREE from './three.js-master/build/three.module.js';
      
      import  {OrbitControls}  from './three.js-master/examples/jsm/controls/OrbitControls.js';
      		  
      
      import  {STLLoader}  from './three.js-master/examples/jsm/loaders/STLLoader.js';
      import  {FontLoader}  from './three.js-master/src/loaders/FontLoader.js';

      
      var container;
      
      var camera, cameraTarget, scene, renderer;
      
      var cameraType = 1;
      var perspectiveAngle = 45;
      var cameraPosX = 0;
      var cameraPosY = 0;
      var cameraPosZ = 300;
      var cameraTargetX = 0;
      var cameraTargetY = 0;
      var cameraTargetZ = 0;
      var upVectorX = 0;
      var upVectorY = 0;
      var upVectorZ = 0;
      var cameralScale = 100;
      
      init();
      animate();
      
      function getQueryStringByName(name){
	  var result = location.search.match(new RegExp("[\?\&]" + name+ "=([^\&]+)","i"));
	  
	  if(result == null || result.length < 1){
	      return "";
	  }
	  
	  return result[1];
      }
      
      function init() {
	  
	  container = document.createElement( 'div' );
	  document.body.appendChild( container );
	  
	  // set camera
	  var cameraTypeStr = getQueryStringByName('cameraType');
	  cameraType = cameraTypeStr == "" ? cameraType : parseInt(cameraTypeStr);
	  
	  var perspectiveAngleStr = getQueryStringByName('perspectiveAngle');
	  perspectiveAngle = perspectiveAngleStr == "" ? perspectiveAngle : parseFloat(perspectiveAngleStr);
	  
	  var cameraPosXStr = getQueryStringByName('cameraPosX');
	  cameraPosX = cameraPosXStr == "" ? cameraPosX : parseFloat(cameraPosXStr) * cameralScale;
	  
	  var cameraPosYStr = getQueryStringByName('cameraPosY');
	  cameraPosY = cameraPosYStr == "" ? cameraPosY : parseFloat(cameraPosYStr) * cameralScale;
	  
	  var cameraPosZStr = getQueryStringByName('cameraPosZ');
	  cameraPosZ = cameraPosZStr == "" ? cameraPosZ : parseFloat(cameraPosZStr) * cameralScale;
	  
	  var cameraTargetXStr = getQueryStringByName('cameraTargetX');
	  cameraTargetX = cameraTargetXStr == "" ? cameraTargetX : parseFloat(cameraTargetXStr) * cameralScale;
	  
	  var cameraTargetYStr = getQueryStringByName('cameraTargetY');
	  cameraTargetY = cameraTargetYStr == "" ? cameraTargetY : parseFloat(cameraTargetYStr) * cameralScale;
	  
	  var cameraTargetZStr = getQueryStringByName('cameraTargetZ');
	  cameraTargetZ = cameraTargetZStr == "" ? cameraTargetZ : parseFloat(cameraTargetZStr) * cameralScale;
	  
	  var upVectorXStr = getQueryStringByName('upVectorX');
	  upVectorX = upVectorXStr == "" ? upVectorX : parseFloat(upVectorXStr) * cameralScale;
	  
	  var upVectorYStr = getQueryStringByName('upVectorY');
	  upVectorY = upVectorYStr == "" ? upVectorY : parseFloat(upVectorYStr) * cameralScale;
	  
	  var upVectorZStr = getQueryStringByName('upVectorZ');
	  upVectorZ = upVectorZStr == "" ? upVectorZ : parseFloat(upVectorZStr) * cameralScale;
	  





			    
			    
				
	  if(cameraType == 0) {
	      camera = new THREE.OrthographicCamera( window.innerWidth / - 2, window.innerWidth / 2, window.innerHeight / 2, window.innerHeight / - 2, 1, 10000 );
	  }
	  else {
	      camera = new THREE.PerspectiveCamera( perspectiveAngle, window.innerWidth / window.innerHeight, 1, 10000 );
	  }

								      
				
								      
	  camera.position.set( cameraPosX, cameraPosY, cameraPosZ);
	  camera.up.set(upVectorX, upVectorY, upVectorZ);
	  
	  cameraTarget = new THREE.Vector3( cameraTargetX, cameraTargetY, cameraTargetZ );
	  camera.lookAt( cameraTarget );
	  
	  scene = new THREE.Scene();
	  scene.fog = new THREE.Fog( 0xffffff, 1, 10000 );

	  // load file





	  const loader_text = new FontLoader();
	  loader_text.load( './three.js-master/examples/fonts/helvetiker_regular.typeface.json', function ( font ) {
	      
	      const color = 0x006699;
	      
	      const matDark = new THREE.LineBasicMaterial( {
		  color: color,
		  side: THREE.DoubleSide
					} );
	      
					const matLite = new THREE.MeshBasicMaterial( {
						color: color,
						transparent: true,
						opacity: 1,
						side: THREE.DoubleSide
					} );

					const message = "Hello WebCAD !!!";

					const shapes = font.generateShapes( message, 2 );

					const geometry = new THREE.ShapeBufferGeometry( shapes );

					geometry.computeBoundingBox();

					const xMid = - 0.5 * ( geometry.boundingBox.max.x - geometry.boundingBox.min.x );

					geometry.translate( xMid, 0, 0 );

					// make shape ( N.B. edge view not visible )

				    const text = new THREE.Mesh( geometry, matLite );
				    text.position.x = 10;
					text.position.z = 20;
					scene.add( text );

					
				} ); //end load function





	  
			    
	  var loader = new STLLoader();
	  var modelName = getQueryStringByName('modelName');
	  loader.load( 'Models/_output.stl', function ( geometry ) {
	      geometry.center(); // see from a center
	      var material = new THREE.MeshPhongMaterial( { color: 0x808080, specular: 0x111111, shininess: 200 } );
	      var mesh = new THREE.Mesh( geometry, material );
	      mesh.castShadow = true;
	      mesh.receiveShadow = true;
	      scene.add( mesh );
	  } );
	  



/*
			    //*******************************************************
			    // center camera on the object (ellipse in this case)
			    //var boundingSphere = ellipse.geometry.boundingSphere
			    
			    // aspect equals window.innerWidth / window.innerHeight
			    if( aspect > 1.0 )
			    {
				// if view is wider than it is tall, zoom to fit height
				//camera.zoom = viewHeight / ( boundingSphere.radius * 2 )
			    }
			    else
			    {
				// if view is taller than it is wide, zoom to fit width
				//camera.zoom = viewWidth / ( boundingSphere.radius * 2 )
			    }
			    
			    // Don't forget this
			    // camera.updateProjectionMatrix();

			    //camera.position.copy(boundingSphere.center)
			    // The number here is more or less arbitrary
			    // as long as all objects that need to be visible
			    // end up within the frustum
			    camera.position.z = 15
			    //*******************************************************

*/


			    


	  const grid = new THREE.GridHelper( 200, 20, 0x000000, 0x000000 );
	  grid.material.opacity = 0.2;
	  grid.material.transparent = true;
	  scene.add( grid );
	  
	  
	  
	  // lights
	  
	  scene.add( new THREE.AmbientLight( 0x333333 ) );
	  
	  addDirectionalLight(-1, 1, 1, 0xFFFFFF, 1.35);
	  addDirectionalLight(1, -1, -1, 0xFFFFFF, 1);
	  
	  // renderer
	  
	  renderer = new THREE.WebGLRenderer( { antialias: true } );
	  renderer.setClearColor( scene.fog.color );
	  renderer.setSize( window.innerWidth, window.innerHeight );
	  
	  renderer.gammaInput = true;
	  renderer.gammaOutput = true;
	  
	  renderer.shadowMapEnabled = true;
	  renderer.shadowMapCullFace = THREE.CullFaceBack;
	  
	  container.appendChild( renderer.domElement );
	  
	  // orbit control
	  
	  //control = new OrbitControls( camera, renderer.domElement );

	  const controls = new OrbitControls( camera, renderer.domElement );
				
	  // events
	  
	  window.addEventListener( 'resize', onWindowResize, false );
      }
			
      function addDirectionalLight( x, y, z, color, intensity ) {
	  
	  var directionalLight = new THREE.DirectionalLight( color, intensity );
	  directionalLight.position.set( x, y, z )
	  scene.add( directionalLight );
      }
      
      function onWindowResize() {

	  camera.aspect = window.innerWidth / window.innerHeight;
	  camera.updateProjectionMatrix();
	  
	  renderer.setSize( window.innerWidth, window.innerHeight );
	  
      }
      
      function animate() {
	  
	  requestAnimationFrame( animate );
	  
	  render();
      }
      
      function render() {
		      
	  var timer = Date.now() * 0.0005;
	  
	  
	  renderer.render( scene, camera );



			    
	  var xmlhttp;
	  if (window.XMLHttpRequest)
	  {
	      //  IE7+, Firefox, Chrome, Opera, Safari 浏览器执行代码
	      xmlhttp=new XMLHttpRequest();
	  }
	  else
	  {
	      // IE6, IE5 浏览器执行代码
	      xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");
	  }
	  xmlhttp.onreadystatechange=function()
	  {
	      if (xmlhttp.readyState==4 && xmlhttp.status==200)
	      {
		  var arr=xmlhttp.responseText.split(" ");
		  console.log(arr);
		  
		  
		  /*					      
		   camera.position.set( arr[3], arr[4], arr[5]);
  		   camera.up.set(arr[6], arr[7], arr[8]);

				cameraTarget = new THREE.Vector3( arr[0], arr[1], arr[2]);
				camera.lookAt( cameraTarget );

				renderer.render( scene, camera );
*/

								      
			     // document.write(arr[0]);
			//					      document.write(" ");
      			//					      document.write(arr[1]);
			//					      document.write(" "); 
			//					      document.write(arr[2]);
			//					      document.write(" "); 
			//					      document.write(arr[3]);
			//					      document.write(" "); 
			//					      document.write(arr[4]);
			//					      document.write(" "); 
			//					      document.write(arr[5]);
			//					      document.write(" "); 
			//					      document.write(arr[6]);
			//					      document.write(" "); 
			//					      document.write(arr[7]);
			//					      document.write(" "); 
			//					      document.write(arr[8]);
			//					      document.write("<br>"); 
			  }
		      }
		      xmlhttp.open("GET","/Models/camera.txt",true);
		      xmlhttp.send();
		  }
		  </script>
	</body>
</html>
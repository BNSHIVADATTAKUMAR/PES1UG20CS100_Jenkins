pipeline {
	    agent any
	

	    stages {
	        stage('Build') {
	            steps {
	                sh 'g++ -o hello working.cpp'
	            }
	        }
	

	        stage('Test') {
	            steps {
	                sh './hello'
	            }
	        }
	

	        
	            }
	        }
	    }
	

	    post {
	        always {
	            script {
	                if (currentBuild.result == 'FAILURE') {
	                    echo 'pipeline failed'
	                }
	            }
	        }
	}
	}

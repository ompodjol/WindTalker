pipeline {
    agent any 

    stages {
        stage('Build Source Code') { 
            steps {
		echo '{Running make started}'
                sh 'pwd; cd src; make; cd ..'
		echo '{Running make ended}'
            }
        }
	stage('Test Binary') {
	    steps {
	    	echo '{Testing binary started}'
		sh 'cd src; ./hellomake'
		echo '{Testing binary ended}'
	    }
	}
	stage('Make Clean') {
            steps {
                echo '{Deleting binary started}'
                sh 'cd src; rm hellomake'
                echo '{Deleting binary ended}'
            }
        }

    }
}

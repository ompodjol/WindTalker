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
                sh 'cd src; ls; git rm -r hellomake; git commit -m "Remove binary file"; git push -u origin master'
                echo '{Deleting binary ended}'
            }
        }

    }
}

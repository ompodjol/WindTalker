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
                sh 'cd src; ls; git branch -a'
		sh 'git checkout master'
		sh 'git branch; git rm -r hellomake'
		sh 'git commit -m "Remove binary file"; git push origin master'
                echo '{Deleting binary ended}'
            }
        }

    }
}

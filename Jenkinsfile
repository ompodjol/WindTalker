pipeline {
    agent any 

    stages {
        stage('Build Source Code') { 
            steps {
		echo '{Running make started}'
                sh 'pwd; rm -rf src/hellomake'
		sh 'git checkout master'
		sh 'git pull'
		sh 'cd src; make; cd ..'
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
	stage('Push Binary') {
            steps {
                echo '{Pushing binary started}'
                sh 'cd src; ls; git branch -a'
		sh 'git checkout master'
		sh 'git branch'
		sh 'git pull'
		sh 'ls; pwd'
		sh 'git add src/hellomake'
		sh 'git commit -m "Add binary file"'
		sh 'git push'
                echo '{Deleting binary ended}'
            }
	}
	 stage('Remove Binary') {
            steps {
                echo '{Deleting binary started}'
                sh 'cd src; ls; git branch -a'
                sh 'git checkout master'
                sh 'git branch; git rm -r hellomake'
                sh 'git commit -m "Remove binary file"'
		sh 'git push origin master'
                echo '{Deleting binary ended}'
            }

        }

    }
}

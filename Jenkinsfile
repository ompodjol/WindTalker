properties([pipelineTriggers([githubPush()])])

pipeline {
    agent {
        node {
            label 'txandolnx13'
        }
    }

    stages {
        stage('Build source Code') { 
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
		echo '{Pushing binary ended}'
	    }
	}
	 stage('Remove Binary') {
            steps {
                echo '{Deleting binary started}'
                echo '{Deleting binary ended}'
            }

        }

    }
}

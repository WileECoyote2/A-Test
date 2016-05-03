using UnityEngine;
using System.Collections;

public class SkeletonSpawn : MonoBehaviour {


	public GameObject SkeletonPrefab;

	public float delay = 10f;
	public float TimeBetweenSpawn;
	
	// Use this for initialization
	void Start () {
		StartCoroutine (SkeletonGenerator());

	}
	IEnumerator SkeletonGenerator(){
		yield return new WaitForSeconds (delay);

		if (TimeBetweenSpawn == delay){
			Instantiate (SkeletonPrefab);
			TimeBetweenSpawn = 0;
		}
		else {
			TimeBetweenSpawn += Time.deltaTime;
		}
	}
	

}

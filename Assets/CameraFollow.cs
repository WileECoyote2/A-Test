using UnityEngine;
using System.Collections;

public class CameraFollow : MonoBehaviour {

	public Transform player;


	
	// Update is called once per frame
	void Update () {
	transform.position = new Vector3 (player.position.x, 20, player.position.z);
	}
}

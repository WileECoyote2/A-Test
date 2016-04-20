using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public float speed = 6f;

	Vector3 movement;
	Animator anim;
	Rigidbody playerRigidBody;
	int floorMask;
}

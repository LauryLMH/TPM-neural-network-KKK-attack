# TPM-neural-network-KKK-attack
In the secure transport protocol, the key establishment protocol is divided into key
transmission protocol and key agreement protocol. A key transport protocol is a
participant that could obtains and passes a key to the other party. Key agreement is the
two sides provide information, derived a shared key together， any party can not be
determined until the final result. This algorithm based on TPM (Tree Parity Machine)
neural network and applied to secure transport protocol.
KKK algorithm is designed by Kanter, Kinzel and Kanter（ 2002）. This algorithm
learns from each other to synchronize the two neural networks. In processing, both sides
are teachers and students, there are no fixed learning objectives. Hence, the algorithm
can be used in key agreement protocol. Both sides learn to synchronize the secret value
through TPM, and then stop learning. Therefore, it is difficult for the attacker to achieve
synchronization.

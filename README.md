# TPM-neural-network-KKK-attack
1. Introduction
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
2. Attack method
Since the KKK algorithm has been proposed, the attack and improvement of the
algorithm has not stopped, its security has not been widely accepted. Ruttor et al. (2006)
proposed three effective attack methods for KKK algorithm: genetic attack, geometric
attack and probabilistic attack. In this experiment, the genetic and geometric attack
experiments are mainly carried out.
2.1 Genetic attack
Genetic attack refers to the unilateral learning of multiple adversaries at the same time,
and the inheritance of more successful adversaries, the less successful opponents will
be eliminated, the experimental results show that genetic attack on the KKK algorithm
with small parameter L can be an effective attack.
Genetic algorithm is a simulation model of biological evolution, because of its simple
and general, robust, suitable for parallel processing. Therefore, has been widely used.
Because it is the natural genetic and computer science combined with the formation of 
infiltration, here on a brief introduction to the relevant terms of genetic algorithms and
general genetic algorithm implementation steps.
1 Chromosome: It represents a possible solution to the problem, usually represented by
a string of bits or strings, each of which represents a gene, the genes located in the same
position on each chromosome are called alleles.
2 groups: a group is a collection of several individuals, because each individual
represents a solution, so the group known as the set of problem solutions.
3 fitness: it is used to represent the degree of individual adaptation to the target
requirements. A fitness value is usually used to represent fitness. Under normal
circumstances, the higher the value of fitness, the individual's adaptability to the
environment stronger.
4 coding: the appropriate way to construct the individual's genotype. Generally use
binary coding scheme, sometimes using other coding methods.
5 Select: according to the individual's fitness, selected as a parent in the group of
individuals. The principle of choice is the individual with high adaptability preference.
6 copy: in accordance with a certain degree of fitness to choose to parents as their own,
copy their genes to future generations.
7 Crossover: Crossover is the generation of genes at the intersection of two parent
chromosomes, by exchanging genes with each other to create new individuals.
8 Variation: For an individual, a random selection of a gene point to change the gene
here, resulting in a new individual. The fitness of new individuals may be higher than 
the original individual may also be lower than the original individual. The basic steps
of genetic algorithm are:
1) initialize k ← 0 evolution algebraic counter; K is maximal evolution algebra; M
individuals are randomly generated as initial population P (k);
2) The individual evaluation calculates the fitness value of each individual in P (k);
3) The selection operator acts on the population;
4) The crossover operator acts on the population;
5) The mutation operator applies the mutation operator to the population, and obtains
the next generation population P (k + 1) by the above operation;
6) Termination condition determination k ≦ K: k ← k + 1 Go to step 2;
k> K: Terminates the output solution.
2.2 Geometric attack
Geometric attacks, also known as flipping attacks, use only a single adversary, but
improve the unilateral learning of the update method, KKK algorithm can also be an
effective attack with any value L. The success rate of Geometric attacks decreases
exponentially with the increase of L, so that an arbitrary safety requirement can be
achieved by increasing L.
3. Experiment environment
In this experiment, I used the Windows environment based Visual Studio 2016 to
experiment and test the results of the program.
4. Conclusion and discussion
When L = 3, K = 3, N = 5000 and M = 400, the attack success rate is 0.783. When L is
larger, the success rate is lower. On the other hand, the higher the success rate, but when
the K value becomes high, the program will exponentially increase the computing time.

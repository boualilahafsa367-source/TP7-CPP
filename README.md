# Exercice 1 : Gestion d’un carnet d’adresses avec surcharge de constructeurs

Figure 1 : Résultat de la compilation et de l'exécution de l'exercice 1
<img width="1920" height="674" alt="image" src="https://github.com/user-attachments/assets/b9b3a056-4120-45a0-9d7c-6d70f745846f" />

Dans cet exercice, nous avons créé une classe Contact représentant une personne dans un carnet d'adresses. 
Trois constructeurs surchargés permettent de créer un contact avec uniquement son nom, avec son nom et son numéro de téléphone, ou avec toutes ses informations, y compris son adresse email.
Une méthode afficher() présente les informations disponibles pour chaque contact.
Les informations non renseignées reçoivent une valeur par défaut.
Cet exercice permet de comprendre comment le compilateur choisit un constructeur selon les paramètres fournis.

# Exercice 2 : Système de facturation – Surcharge de méthodes

Figure 2 : Résultat de la compilation et de l'exécution de l'exercice 2
<img width="1920" height="904" alt="Screenshot (1264)" src="https://github.com/user-attachments/assets/e12f3c10-6d76-4808-8ec0-8bc654decf53" />


Dans cet exercice, nous avons développé une classe Facture permettant d'ajouter des articles de différentes manières grâce à trois versions surchargées de la méthode ajouterArticle().
Les articles sont stockés dans un tableau dynamique utilisant vector.
Chaque article contient son nom, son prix unitaire, sa quantité et son taux de TVA.
La méthode afficherTotal() calcule le montant hors taxe et le montant toutes taxes comprises.
Cet exercice permet de maîtriser la surcharge de méthodes et l'utilisation d'un tableau dynamique.

# Exercice 3 : Banque – Constructeurs surchargés et logique métier

Figure 3 : Résultat de la compilation et de l'exécution de l'exercice 3
<img width="1920" height="933" alt="Screenshot (1265)" src="https://github.com/user-attachments/assets/5c6b2eda-2cd6-4ec2-bd03-84ab5c159400" />

Dans cet exercice, nous avons créé une classe CompteBancaire avec deux constructeurs permettant d'ouvrir un compte avec ou sans solde initial.
Deux versions surchargées de la méthode retrait() permettent de tester un retrait avec ou sans code de sécurité.
Des vérifications empêchent les retraits avec un code incorrect, un montant invalide ou un solde insuffisant. 
La méthode afficherSolde() permet de consulter le solde après les opérations.
Cet exercice met en pratique la surcharge et l'utilisation des conditions pour gérer les opérations bancaires.

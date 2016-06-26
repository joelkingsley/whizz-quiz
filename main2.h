class user
{
	public:
	char username[15];//Username
	char password[10];//Password
	int score;//Score i.e. total correct answers
	int exp;//Experience i.e. total number of questions attempted in lifetime
	char level[20];//Level i.e. calculated by (score/exp)*100. starts from Lv1
    void loginuser();//Logins in user
	int checkname(char *);
	void loginme(char *);
	void registeruser();
	void presentation();

}meobj;


/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "fact.h"

int *
factorial_1_svc(S *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	 int ans=1;
	 int i;
	 for(i=1;i<=argp->a;i++){
		 ans=ans*i;
	 }

	 result=ans;
	 printf("%d != %d",(argp->a),result);
	return &result;
}

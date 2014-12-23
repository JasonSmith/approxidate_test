/* Main.c generated by valac 0.26.1, the Vala compiler
 * generated from Main.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "approxidate.h"

#define _g_free0(var) (var = (g_free (var), NULL))



gint test_main (gchar** args, int args_length1);


gint test_main (gchar** args, int args_length1) {
	gint result = 0;
	gint _result_ = 0;
	gchar* date = NULL;
	struct timeval tv = {0};
	gchar* _tmp0_ = NULL;
	struct timeval _tmp1_ = {0};
	gint _tmp2_ = 0;
	_tmp0_ = g_strdup ("10/Mar/2013:00:00:02.003");
	_g_free0 (date);
	date = _tmp0_;
	_tmp2_ = approxidate (date, &_tmp1_);
	tv = _tmp1_;
	_result_ = _tmp2_;
	if (_result_ == (-1)) {
		g_error ("Main.vala:14: There was a problem parsing the date.");
	}
	g_message ("Main.vala:16: Date approximated correctly.");
	result = 0;
	_g_free0 (date);
	return result;
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
	return test_main (argv, argc);
}




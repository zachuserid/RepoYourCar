#include "main.h"
//`pkg-config gtkmm-3.0 --cflags --libs`

using namespace std;
char buf[5];
void application(GtkWidget *widget, WindowApp *theApp)
{
	int cont = 0;

	/////////////////////////////////////////////////
	//--Creates form and adds it onto the window---//
	/////////////////////////////////////////////////

	GtkWidget *entry = gtk_entry_new();
	gtk_fixed_put(GTK_FIXED(theApp->frame), entry, 50, 120);
	gtk_widget_show_all(theApp->frame);
	gtk_window_resize(GTK_WINDOW(theApp->window), 400,600);
	gtk_label_set_text(GTK_LABEL(theApp->label), "Please Enter Info Below");
	//const gchar * s1 = gtk_entry_get_text(GTK_ENTRY(entry));

	/*while(cont == 0){

	
		if(errorCheck() == 1){
			
			cont = 1;
		}
		else if (errorCheck() == 0){
			cout << "You fucked up bro!";
	
		}
  
	}*/
  
}

void admin(GtkWidget *widget, WindowApp *theApp)
{
  
}

int errorCheck(){

}
void callback()
{
	/*const gchar * s1 = gtk_entry_get_text(GTK_ENTRY(num1));
	const gchar * s2 = gtk_entry_get_text(GTK_ENTRY(num2));
	int n1 = atoi(s1), n2=atoi(s2);
	n1=abs(n1), n2=abs(n2); // GCD defined to return non-negative value
	int i; for ( i=(n1>n2?n1:n2); i>=1; i-- ) if ( n1/i*i==n1 && n2/i*i==n2 ) break;
	char s3[32]; snprintf(s3,32,"%d",i);
	gtk_entry_set_text(GTK_ENTRY(mcdt),s3);*/
}

int main(int argc, char** argv) {

	/////////////////////////////////////////////////////
	//-----------Declaration of all the widgets------////
	/////////////////////////////////////////////////////
	GtkWidget *label;
	GtkWidget *window;
	GtkWidget *frame;
	GtkWidget *apply;
	GtkWidget *login;
	WindowApp *theApp = new WindowApp();
	
	// initialize GTK+
	gtk_init(&argc, &argv);
	

	/////////////////////////////////////////////////////
	//-----------Create the window ------------------////
	/////////////////////////////////////////////////////
	/*window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	gtk_window_set_default_size(GTK_WINDOW(window), 250, 200);
	gtk_window_set_title(GTK_WINDOW(window), "Application Center");
	theApp->window = window;*/


	
	theApp->window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_position(GTK_WINDOW(theApp->window), GTK_WIN_POS_CENTER);
	gtk_window_set_default_size(GTK_WINDOW(theApp->window), 400, 200);
	gtk_window_set_title(GTK_WINDOW(theApp->window), "Application Center");
	//theApp->window = window;

	/////////////////////////////////////////////////////
	//-----------Add frame onto window---------------////
	/////////////////////////////////////////////////////
	theApp->frame = gtk_fixed_new();
	
	gtk_container_add(GTK_CONTAINER(theApp->window), theApp->frame);
	
	
	/////////////////////////////////////////////////////
	//Make the application button and add to frame---////
	/////////////////////////////////////////////////////
	theApp->apply = gtk_button_new_with_label("Apply");
	gtk_widget_set_size_request(theApp->apply, 80, 35);
	gtk_fixed_put(GTK_FIXED(theApp->frame), theApp->apply, 50, 20);
	
	/////////////////////////////////////////////////////
	//------Make the login button and add to frame---////
	/////////////////////////////////////////////////////
	theApp->login = gtk_button_new_with_label("Login");
	gtk_widget_set_size_request(theApp->login, 80, 35);
	gtk_fixed_put(GTK_FIXED(theApp->frame), theApp->login, 50, 80);

	/////////////////////////////////////////////////////
	//------Make the Prompt Label and add to frame---////
	/////////////////////////////////////////////////////
	theApp->label = gtk_label_new("Click Apply to Choose Your Courses");
	gtk_fixed_put(GTK_FIXED(theApp->frame), theApp->label, 150, 58); 
	
	/////////////////////////////////////////////////////
	//----------Show all the widgets on the window---////
	/////////////////////////////////////////////////////
	gtk_widget_show_all(theApp->window);
	


	/////////////////////////////////////////////////////
	//Connect signals with each button as well as close////
	/////////////////////////////////////////////////////
	g_signal_connect(theApp->window, "destroy", G_CALLBACK (gtk_main_quit), NULL);

	g_signal_connect(theApp->apply, "clicked", G_CALLBACK(application), theApp);

	g_signal_connect(theApp->login, "clicked", G_CALLBACK(admin), theApp);

	gtk_main();

	return 0;
}



 
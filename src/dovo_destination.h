#ifndef __dovo_destination__
#define __dovo_destination__

/**
@file
Subclass of destination, which is generated by wxFormBuilder.
*/

#include "gui.h"

//// end generated include
#include <boost/lexical_cast.hpp>
#include <vector>
#include "destinationentry.h"
#include <wx/msgdlg.h>

/** Implementing destination */
class dovo_destination : public destination
{
	protected:
		// Handlers for destination events.
		void OnInitDialog( wxInitDialogEvent& event );
		void OnDeselected( wxListEvent& event );
		void OnSelect( wxListEvent& event );
		void OnAdd( wxCommandEvent& event );
		void OnDelete( wxCommandEvent& event );
		void OnNameUpdate( wxKeyEvent& event );
		void OnOK( wxCommandEvent& event );
	public:
		/** Constructor */
		dovo_destination( wxWindow* parent );
	//// end generated class members

		std::vector<DestinationEntry> m_destinations;
		void SetCtrlState();
		void UpdateItem(int sel = -1);
		int GetSelectedDestinationItem();
		


};

#endif // __dovo_destination__

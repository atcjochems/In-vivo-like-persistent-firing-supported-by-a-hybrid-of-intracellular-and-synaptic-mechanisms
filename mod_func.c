#include <stdio.h>
#include "hocdec.h"
#define IMPORT extern __declspec(dllimport)
IMPORT int nrnmpi_myid, nrn_nobanner_;

modl_reg(){
	//nrn_mswindll_stdio(stdin, stdout, stderr);
    if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
	fprintf(stderr, "Additional mechanisms from files\n");

fprintf(stderr," HH_traub.mod");
fprintf(stderr," ICAN_destexhe.mod");
fprintf(stderr," IL_gutnick.mod");
fprintf(stderr," IM_cortex.mod");
fprintf(stderr," IT_huguenard.mod");
fprintf(stderr," SinClamp.mod");
fprintf(stderr," cadecay_destexhe.mod");
fprintf(stderr," gabab.mod");
fprintf(stderr," hhr.mod");
fprintf(stderr, "\n");
    }
_HH_traub_reg();
_ICAN_destexhe_reg();
_IL_gutnick_reg();
_IM_cortex_reg();
_IT_huguenard_reg();
_SinClamp_reg();
_cadecay_destexhe_reg();
_gabab_reg();
_hhr_reg();
}

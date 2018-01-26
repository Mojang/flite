/* Generated automatically from make_lang_list */

#include "flite.h"

void usenglish_init(cst_voice *v);
cst_lexicon *cmulex_init(void);


void flite_set_lang_list(void)
{
   flite_add_lang("eng",usenglish_init,cmulex_init);
   flite_add_lang("usenglish",usenglish_init,cmulex_init);
}


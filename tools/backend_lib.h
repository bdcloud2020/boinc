// The contents of this file are subject to the Mozilla Public License
// Version 1.0 (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
// http://www.mozilla.org/MPL/ 
// 
// Software distributed under the License is distributed on an "AS IS"
// basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
// License for the specific language governing rights and limitations
// under the License. 
// 
// The Original Code is the Berkeley Open Infrastructure for Network Computing. 
// 
// The Initial Developer of the Original Code is the SETI@home project.
// Portions created by the SETI@home project are Copyright (C) 2002
// University of California at Berkeley. All Rights Reserved. 
// 
// Contributor(s):
//

#include "crypt.h"

extern int add_signatures(char*, R_RSA_PRIVATE_KEY&);
extern int remove_signatures(char*);

extern int process_result_template(
    char* result_template,
    R_RSA_PRIVATE_KEY& key,
    char* base_filename,
    char* upload_url, char* download_url
);

extern int read_file(FILE*, char* buf);
extern int read_filename(char* path, char* buf);

extern int read_key_file(char* keyfile, R_RSA_PRIVATE_KEY& key);

extern void initialize_result(RESULT&, WORKUNIT&);
extern int create_result(
    WORKUNIT& wu, char* result_template_filename, char* suffix,
    R_RSA_PRIVATE_KEY& key, char* upload_url, char* download_url
);

extern int create_work(
    WORKUNIT& wu,
    char* wu_template,
    char* result_template,
    int nresults,
    char* infile_dir,
    char** infiles,
    int ninfiles,
    R_RSA_PRIVATE_KEY&,
    char* upload_url,
    char* download_url
);

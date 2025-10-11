
void X509_get_signature_info
               (X509 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  X509_check_purpose(param_1,-1,-1);
  X509_SIG_INFO_get(param_1->sha1_hash + 8,param_2,param_3,param_4,param_5);
  return;
}


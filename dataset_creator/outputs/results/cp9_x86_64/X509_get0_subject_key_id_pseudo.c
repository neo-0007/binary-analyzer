
undefined8 X509_get0_subject_key_id(X509 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = X509_check_purpose(param_1,-1,0);
  uVar2 = 0;
  if (iVar1 == 1) {
    uVar2 = *(undefined8 *)&param_1[1].ex_data.dummy;
  }
  return uVar2;
}


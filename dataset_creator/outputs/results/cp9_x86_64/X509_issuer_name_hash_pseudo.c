
ulong X509_issuer_name_hash(X509 *a)

{
  ulong uVar1;
  
  uVar1 = X509_NAME_hash_ex(*(undefined8 *)&(a->ex_data).dummy,0,0,0);
  return uVar1;
}


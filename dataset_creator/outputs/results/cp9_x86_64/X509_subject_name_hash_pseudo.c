
ulong X509_subject_name_hash(X509 *x)

{
  ulong uVar1;
  
  uVar1 = X509_NAME_hash_ex(x->ex_flags,0,0,0);
  return uVar1;
}



int X509_cmp(X509 *a,X509 *b)

{
  X509_POLICY_CACHE *__n;
  int iVar1;
  uint uVar2;
  
  if (a != b) {
    X509_check_purpose(a,-1,0);
    X509_check_purpose(b,-1,0);
    if (((((ulong)a[1].name & 0x100000) == 0) && (((ulong)b[1].name & 0x100000) == 0)) &&
       (iVar1 = bcmp(&a[1].akid,&b[1].akid,0x14), iVar1 != 0)) {
      uVar2 = iVar1 >> 0x1f | 1;
    }
    else if (*(int *)&a->crldp == 0) {
      uVar2 = 0;
      if (*(int *)&b->crldp == 0) {
        __n = a->policy_cache;
        uVar2 = 0xffffffff;
        if (((long)b->policy_cache <= (long)__n) && (uVar2 = 1, (long)__n <= (long)b->policy_cache))
        {
          iVar1 = bcmp(a->akid,b->akid,(size_t)__n);
          uVar2 = (uint)(0 < iVar1);
          if (iVar1 < 0) {
            uVar2 = 0xffffffff;
          }
        }
      }
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}


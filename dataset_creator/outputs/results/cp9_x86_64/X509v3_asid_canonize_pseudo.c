
ulong X509v3_asid_canonize(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  uVar2 = ASIdentifierChoice_canonize(*param_1);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = ASIdentifierChoice_canonize(param_1[1]);
  return (ulong)(iVar1 != 0);
}


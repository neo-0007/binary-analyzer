
ulong i2r_ASIdentifiers(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  
  if ((*param_2 != 0) &&
     (uVar2 = i2r_ASIdentifierChoice_part_0(param_3,*param_2,param_4,"Autonomous System Numbers"),
     (int)uVar2 == 0)) {
    return uVar2;
  }
  uVar2 = 1;
  if (param_2[1] != 0) {
    iVar1 = i2r_ASIdentifierChoice_part_0(param_3,param_2[1],param_4,"Routing Domain Identifiers");
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


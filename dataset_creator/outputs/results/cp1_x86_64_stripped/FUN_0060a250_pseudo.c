
undefined4 FUN_0060a250(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  
  FUN_004ae9e0(param_1,&DAT_0080b2dc,param_3,&DAT_0083e5c2,param_4);
  iVar1 = (int)param_3;
  if (*param_2 == 0) {
    uVar5 = 1;
    FUN_004ae9e0(param_1,"%*sinherit\n",iVar1 + 2,&DAT_0083e5c2);
  }
  else if (*param_2 == 1) {
    iVar6 = 0;
    while( true ) {
      iVar2 = FUN_00436480(*(undefined8 *)(param_2 + 2));
      if (iVar2 <= iVar6) break;
      piVar3 = (int *)FUN_004364a0(*(undefined8 *)(param_2 + 2),iVar6);
      if (*piVar3 == 0) {
        lVar4 = FUN_0059cfa0(0,*(undefined8 *)(piVar3 + 2));
        if (lVar4 == 0) goto LAB_0060a368;
        FUN_004ae9e0(param_1,"%*s%s\n",iVar1 + 2,&DAT_0083e5c2,lVar4);
        FUN_0041ad60(lVar4,"../crypto/x509/v3_asid.c",0x54);
      }
      else {
        if (*piVar3 != 1) goto LAB_0060a368;
        lVar4 = FUN_0059cfa0(0,**(undefined8 **)(piVar3 + 2));
        if (lVar4 == 0) goto LAB_0060a368;
        FUN_004ae9e0(param_1,"%*s%s-",iVar1 + 2,&DAT_0083e5c2,lVar4);
        FUN_0041ad60(lVar4,"../crypto/x509/v3_asid.c",0x5a);
        lVar4 = FUN_0059cfa0(0,*(undefined8 *)(*(long *)(piVar3 + 2) + 8));
        if (lVar4 == 0) goto LAB_0060a368;
        FUN_004ae9e0(param_1,"%s\n",lVar4);
        FUN_0041ad60(lVar4,"../crypto/x509/v3_asid.c",0x5e);
      }
      iVar6 = iVar6 + 1;
    }
    uVar5 = 1;
  }
  else {
LAB_0060a368:
    uVar5 = 0;
  }
  return uVar5;
}


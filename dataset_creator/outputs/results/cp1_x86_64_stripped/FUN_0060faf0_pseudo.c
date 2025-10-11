
void FUN_0060faf0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  iVar2 = FUN_00436480();
  if (0 < iVar2) {
    FUN_004ae9e0(param_2,&DAT_0080b2dc,param_3,&DAT_0083e5c2,param_4);
  }
  iVar2 = 0;
  while( true ) {
    iVar3 = FUN_00436480(param_1);
    if (iVar3 <= iVar2) break;
    if (iVar2 != 0) {
      FUN_004ab870(param_2,&DAT_008243ea);
    }
    puVar4 = (undefined8 *)FUN_004364a0(param_1,iVar2);
    FUN_004ae9e0(param_2,"%*s",param_3 + 2,&DAT_0083e5c2);
    if (*(int *)*puVar4 == 7) {
      piVar1 = *(int **)((int *)*puVar4 + 2);
      iVar3 = *piVar1;
      if (iVar3 < 0x10) {
        iVar7 = 4;
        if (iVar3 < 5) {
          iVar7 = iVar3;
        }
        lVar6 = (long)iVar7;
      }
      else {
        lVar6 = 0x10;
        iVar7 = 0x10;
      }
      lVar5 = FUN_0059ddb0(*(undefined8 *)(piVar1 + 2));
      lVar6 = FUN_0059ddb0(lVar6 + *(long *)(piVar1 + 2),iVar3 - iVar7);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        FUN_004ae9e0(param_2,&DAT_0081b931,lVar5,lVar6);
      }
      FUN_0041ad60(lVar5,"../crypto/x509/v3_ncons.c",0xd9);
      FUN_0041ad60(lVar6,"../crypto/x509/v3_ncons.c",0xda);
    }
    else {
      FUN_00612440(param_2);
    }
    iVar2 = iVar2 + 1;
  }
  return;
}


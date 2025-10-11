
void FUN_0060c060(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  
  iVar9 = 0;
  do {
    iVar3 = FUN_00436480(param_2);
    if (iVar3 <= iVar9) {
      return;
    }
    if (iVar9 != 0) {
      FUN_004ab870(param_1,&DAT_008243ea);
    }
    puVar6 = (undefined8 *)FUN_004364a0(param_2,iVar9);
    iVar3 = FUN_00423da0(*puVar6);
    if (iVar3 == 0xa4) {
      FUN_004ae9e0(param_1,"%*sCPS: %.*s",param_3,&DAT_0083e5c2,*(undefined4 *)puVar6[1],
                   *(undefined8 *)((undefined4 *)puVar6[1] + 2));
    }
    else if (iVar3 == 0xa5) {
      FUN_004ae9e0(param_1,"%*sUser Notice:\n",param_3,&DAT_0083e5c2);
      puVar6 = (undefined8 *)puVar6[1];
      iVar3 = param_3 + 2;
      puVar1 = (undefined8 *)*puVar6;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_004ae9e0(param_1,"%*sOrganization: %.*s\n",iVar3,&DAT_0083e5c2,*(undefined4 *)*puVar1,
                     *(undefined8 *)((undefined4 *)*puVar1 + 2));
        iVar4 = FUN_00436480(puVar1[1]);
        puVar8 = &DAT_007e3d62;
        if (iVar4 < 2) {
          puVar8 = &DAT_0083e5c2;
        }
        FUN_004ae9e0(param_1,"%*sNumber%s: ",iVar3,&DAT_0083e5c2,puVar8);
        for (iVar4 = 0; iVar5 = FUN_00436480(puVar1[1]), iVar4 < iVar5; iVar4 = iVar4 + 1) {
          lVar7 = FUN_004364a0(puVar1[1],iVar4);
          if (iVar4 == 0) {
            if (lVar7 == 0) goto LAB_0060c1fc;
LAB_0060c18d:
            lVar7 = FUN_0059cfa0(0,lVar7);
            if (lVar7 == 0) goto LAB_0060c0ae;
            FUN_004ab870(param_1,lVar7);
            FUN_0041ad60(lVar7,"../crypto/x509/v3_cpols.c",0x1d8);
          }
          else {
            FUN_004ab870(param_1,&DAT_00801fb4);
            if (lVar7 != 0) goto LAB_0060c18d;
LAB_0060c1fc:
            FUN_004ab870(param_1,"(null)");
          }
        }
        if (puVar6[1] == 0) goto LAB_0060c0ae;
        FUN_004ab870(param_1,&DAT_008243ea);
      }
      puVar2 = (undefined4 *)puVar6[1];
      if (puVar2 != (undefined4 *)0x0) {
        FUN_004ae9e0(param_1,"%*sExplicit Text: %.*s",iVar3,&DAT_0083e5c2,*puVar2,
                     *(undefined8 *)(puVar2 + 2));
      }
    }
    else {
      FUN_004ae9e0(param_1,"%*sUnknown Qualifier: ",param_3 + 2,&DAT_0083e5c2);
      FUN_004a0450(param_1,*puVar6);
    }
LAB_0060c0ae:
    iVar9 = iVar9 + 1;
  } while( true );
}


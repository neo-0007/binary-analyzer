
long FUN_0060de30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long local_68;
  int local_50;
  
  iVar2 = FUN_00436480(param_3);
  local_68 = FUN_004363b0(0,iVar2);
  if (local_68 == 0) {
    puVar4 = (undefined8 *)0x0;
    lVar6 = 0;
LAB_0060e086:
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_crld.c",0x11c,"v2i_crld");
    FUN_0051f8f0(0x22,0xc0100,0);
LAB_0060e006:
    FUN_0060e6f0(puVar4);
    FUN_0060e7a0(lVar6);
    FUN_00436430(local_68,FUN_0060d6a0);
    local_68 = 0;
  }
  else if (0 < iVar2) {
    local_50 = 0;
    do {
      lVar6 = FUN_004364a0(param_3,local_50);
      if (*(long *)(lVar6 + 0x10) == 0) {
        lVar6 = FUN_0061dcb0(param_2,*(undefined8 *)(lVar6 + 8));
        if (lVar6 == 0) {
LAB_0060e0bb:
          puVar4 = (undefined8 *)0x0;
          lVar6 = 0;
          goto LAB_0060e006;
        }
        lVar7 = FUN_0060de10();
        if (lVar7 == 0) {
LAB_0060dff1:
          puVar4 = (undefined8 *)0x0;
          FUN_0060d6a0(lVar7);
          FUN_0061dd50(param_2,lVar6);
          lVar6 = 0;
          goto LAB_0060e006;
        }
        for (iVar9 = 0; iVar3 = FUN_00436480(lVar6), iVar9 < iVar3; iVar9 = iVar9 + 1) {
          lVar8 = FUN_004364a0(lVar6,iVar9);
          iVar3 = FUN_0060db60(lVar7,param_2,lVar8);
          if (iVar3 < 1) {
            if (iVar3 != 0) goto LAB_0060dff1;
            uVar1 = *(undefined8 *)(lVar8 + 8);
            iVar3 = thunk_FUN_00712780(uVar1,"reasons");
            if (iVar3 == 0) {
              iVar3 = FUN_0060d4b0(lVar7 + 8,*(undefined8 *)(lVar8 + 0x10));
              if (iVar3 == 0) goto LAB_0060dff1;
            }
            else {
              iVar3 = thunk_FUN_00712780(uVar1,"CRLissuer");
              if (iVar3 == 0) {
                lVar8 = FUN_0060d5d0(param_2,*(undefined8 *)(lVar8 + 0x10));
                *(long *)(lVar7 + 0x10) = lVar8;
                if (lVar8 == 0) goto LAB_0060dff1;
              }
            }
          }
        }
        FUN_0061dd50(param_2,lVar6);
        FUN_00435f80(local_68,lVar7);
      }
      else {
        puVar4 = (undefined8 *)FUN_00612de0(param_1,param_2,lVar6);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0060e0bb;
        lVar6 = FUN_0060e780();
        if (((lVar6 == 0) || (iVar9 = FUN_00435f80(lVar6,puVar4), iVar9 == 0)) ||
           (puVar4 = (undefined8 *)FUN_0060de10(), puVar4 == (undefined8 *)0x0)) goto LAB_0060e086;
        FUN_00435f80(local_68,puVar4);
        puVar5 = (undefined4 *)FUN_0060db40();
        *puVar4 = puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          puVar4 = (undefined8 *)0x0;
          goto LAB_0060e086;
        }
        *(long *)(puVar5 + 2) = lVar6;
        *puVar5 = 0;
      }
      local_50 = local_50 + 1;
    } while (iVar2 != local_50);
  }
  return local_68;
}


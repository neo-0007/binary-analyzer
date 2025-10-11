
undefined4 FUN_005a09f0(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = (undefined4 *)FUN_0059ff30();
  local_44 = 0;
  lVar1 = *param_2;
  if (puVar5 == (undefined4 *)0x0) {
    uVar11 = 0xffffffff;
  }
  else {
    *param_1 = 0;
    uVar6 = FUN_0059e6c0(param_3);
    iVar3 = FUN_005a00e0(param_2,1,uVar6,puVar5);
    if (iVar3 == 1) {
      iVar3 = (*(code *)param_2[9])(param_2,param_3,*(undefined8 *)(puVar5 + 2));
      uVar11 = 1;
      if ((iVar3 == 0) ||
         (iVar3 = FUN_005a3c90(param_2,*(undefined8 *)(puVar5 + 2),0xffffffff), iVar3 == 0)) {
        FUN_0059f740(puVar5);
        if ((lVar1 == 0) || (iVar3 = FUN_0059f880(lVar1), iVar3 == 0)) {
          uVar11 = 0;
        }
        else {
          iVar3 = FUN_0059f6a0(*(undefined8 *)(lVar1 + 8),1,uVar6,&local_44);
          if ((iVar3 == -1) || (uVar2 = 0, iVar10 = iVar3, local_44 < 1)) {
            uVar11 = 0;
            lVar9 = *param_1;
          }
          else {
            do {
              piVar7 = (int *)FUN_004364a0(*(undefined8 *)(lVar1 + 8),iVar10);
              if (*piVar7 != 1) break;
              iVar4 = (*(code *)param_2[9])(param_2,param_3,*(undefined8 *)(piVar7 + 2));
              if (iVar4 != 0) {
                iVar4 = FUN_005a3c90(param_2,*(undefined8 *)(piVar7 + 2),0xffffffff);
                if (iVar4 != 0) {
                  lVar9 = *(long *)(piVar7 + 2);
                  *param_1 = lVar9;
                  goto LAB_005a0beb;
                }
                if (*param_1 != 0) {
                  uVar6 = FUN_005a1b60();
                  uVar8 = FUN_005a1b60(*(undefined8 *)(piVar7 + 2));
                  iVar4 = FUN_005b8480(uVar8,uVar6);
                  if (iVar4 < 1) {
                    uVar2 = 1;
                    goto LAB_005a0af8;
                  }
                }
                uVar2 = 1;
                *param_1 = *(long *)(piVar7 + 2);
              }
LAB_005a0af8:
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar3 + local_44);
            uVar11 = uVar2;
            lVar9 = *param_1;
          }
LAB_005a0beb:
          if ((lVar9 != 0) && (iVar3 = FUN_005a1b20(), iVar3 == 0)) {
            uVar11 = 0xffffffff;
            *param_1 = 0;
          }
          FUN_0059f890(lVar1);
        }
      }
      else {
        *param_1 = *(long *)(puVar5 + 2);
        *puVar5 = 0;
        FUN_0059f740(puVar5);
      }
    }
    else {
      uVar11 = 0;
      FUN_0059f740(puVar5);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar11;
}


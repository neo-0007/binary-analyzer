
ulong FUN_004b4eb0(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,long param_6)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long in_FS_OFFSET;
  long local_190;
  uint local_184;
  int local_170;
  long local_148 [33];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = FUN_004b7e80(param_3,4);
  if (((iVar2 != 0) || (iVar2 = FUN_004b7e80(param_2,4), iVar2 != 0)) ||
     (iVar2 = FUN_004b7e80(param_4,4), iVar2 != 0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = FUN_004b4e80(param_1,param_2,param_3,param_4,param_5,param_6);
      return uVar6;
    }
    goto LAB_004b5535;
  }
  iVar2 = FUN_004b7d40(param_4);
  if (iVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_exp.c",0x13c,"BN_mod_exp_mont");
    FUN_0051f8f0(3,0x66,0);
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_004b7bb0(param_3);
    if (iVar2 == 0) {
      iVar2 = FUN_004b7b70(param_4,1);
      if (iVar2 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = FUN_004b8190(param_1,1);
          return uVar6;
        }
        goto LAB_004b5535;
      }
      FUN_004b7b50(param_1);
      uVar3 = 1;
    }
    else {
      FUN_004b2c00(param_5);
      uVar7 = FUN_004b2df0(param_5);
      plVar8 = (long *)FUN_004b2df0(param_5);
      lVar9 = FUN_004b2df0(param_5);
      local_148[0] = lVar9;
      if (lVar9 == 0) {
        local_190 = 0;
        uVar3 = 0;
        goto LAB_004b51b0;
      }
      local_190 = param_6;
      if (param_6 == 0) {
        local_190 = FUN_004b9790();
        if (local_190 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_004b9860(local_190,param_4,param_5);
          if (uVar3 != 0) goto LAB_004b4fce;
        }
LAB_004b5280:
        FUN_004b9810(local_190);
      }
      else {
LAB_004b4fce:
        if ((((*(int *)(param_2 + 0x10) != 0) || (iVar4 = FUN_004b77f0(param_2,param_4), -1 < iVar4)
             ) && (uVar3 = FUN_004b8a20(lVar9,param_2,param_4,param_5), param_2 = lVar9, uVar3 == 0)
            ) || (uVar3 = FUN_004b9720(lVar9,param_2,local_190,param_5), uVar3 == 0))
        goto LAB_004b51b0;
        if (iVar2 < 0x2a0) {
          if (0xef < iVar2) {
            local_170 = 5;
            goto LAB_004b5060;
          }
          if (0x4f < iVar2) {
            local_170 = 4;
            goto LAB_004b5060;
          }
          if (0x17 < iVar2) {
            local_170 = 3;
            goto LAB_004b5060;
          }
          local_170 = 1;
        }
        else {
          local_170 = 6;
LAB_004b5060:
          uVar3 = FUN_004b9520(uVar7,lVar9,lVar9,local_190,param_5);
          if (uVar3 == 0) goto LAB_004b51b0;
          plVar10 = local_148;
          do {
            lVar9 = FUN_004b2df0(param_5);
            plVar10[1] = lVar9;
            if (lVar9 == 0) goto LAB_004b533b;
            iVar4 = FUN_004b9520(lVar9,*plVar10,uVar7,local_190);
            if (iVar4 == 0) {
              uVar3 = 0;
              goto LAB_004b51b0;
            }
            plVar10 = plVar10 + 1;
          } while (plVar10 != local_148 + (ulong)((1 << ((char)local_170 - 1U & 0x1f)) - 2) + 1);
        }
        iVar4 = (int)param_4[1];
        if (*(long *)(*param_4 + -8 + (long)iVar4 * 8) < 0) {
          lVar9 = FUN_004b8240(plVar8,iVar4);
          if (lVar9 != 0) {
            param_4 = (long *)*param_4;
            plVar10 = (long *)*plVar8;
            *plVar10 = -*param_4;
            if (1 < iVar4) {
              lVar9 = 1;
              do {
                plVar10[lVar9] = ~param_4[lVar9];
                lVar9 = lVar9 + 1;
              } while (iVar4 != lVar9);
            }
            *(int *)(plVar8 + 1) = iVar4;
            goto LAB_004b513d;
          }
LAB_004b533b:
          uVar3 = 0;
        }
        else {
          uVar7 = FUN_004b75a0();
          uVar3 = FUN_004b9720(plVar8,uVar7,local_190,param_5);
          if (uVar3 != 0) {
LAB_004b513d:
            bVar1 = true;
            iVar2 = iVar2 + -1;
            while( true ) {
              while (iVar4 = FUN_004b78f0(param_3,iVar2), iVar4 == 0) {
                if ((!bVar1) &&
                   (uVar3 = FUN_004b9520(plVar8,plVar8,plVar8,local_190,param_5), uVar3 == 0))
                goto LAB_004b51b0;
                if (iVar2 == 0) goto LAB_004b5181;
                iVar2 = iVar2 + -1;
              }
              if (local_170 == 1) {
                local_184 = 1;
                iVar4 = 0;
              }
              else if (iVar2 < 1) {
                local_184 = 1;
                iVar4 = 0;
              }
              else {
                iVar11 = 1;
                iVar4 = 0;
                local_184 = 1;
                do {
                  iVar5 = FUN_004b78f0(param_3,iVar2 - iVar11);
                  if (iVar5 != 0) {
                    local_184 = local_184 << ((char)iVar11 - (char)iVar4 & 0x1fU) | 1;
                    iVar4 = iVar11;
                  }
                  iVar11 = iVar11 + 1;
                } while ((local_170 != iVar11) && (iVar11 != iVar2 + 1));
              }
              if (!bVar1) {
                iVar11 = 0;
                do {
                  iVar5 = FUN_004b9520(plVar8,plVar8,plVar8,local_190,param_5);
                  if (iVar5 == 0) {
                    uVar3 = 0;
                    goto LAB_004b51b0;
                  }
                  iVar11 = iVar11 + 1;
                } while (iVar4 + 1 != iVar11);
              }
              uVar3 = FUN_004b9520(plVar8,plVar8,local_148[(int)local_184 >> 1],local_190,param_5);
              if (uVar3 == 0) goto LAB_004b51b0;
              iVar2 = iVar2 - (iVar4 + 1);
              if (iVar2 < 0) break;
              bVar1 = false;
            }
LAB_004b5181:
            iVar2 = FUN_004b96f0(param_1,plVar8,local_190,param_5);
            uVar3 = (uint)(iVar2 != 0);
          }
        }
LAB_004b51b0:
        if (param_6 == 0) goto LAB_004b5280;
      }
      FUN_004b2d50(param_5);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar3;
  }
LAB_004b5535:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


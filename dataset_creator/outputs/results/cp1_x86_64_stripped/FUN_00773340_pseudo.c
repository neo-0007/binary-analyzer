
uint FUN_00773340(ushort *param_1,uint param_2,undefined8 *param_3,uint param_4,long param_5,
                 uint param_6,uint param_7)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ushort uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  long in_FS_OFFSET;
  byte bVar14;
  uint local_668;
  int local_62c;
  undefined8 *local_628;
  long *local_620;
  undefined1 local_618 [32];
  undefined1 local_5f8 [57];
  undefined8 uStack_5bf;
  undefined4 local_5b7;
  undefined4 uStack_5b3;
  undefined1 *local_468;
  undefined8 local_460;
  undefined1 local_458 [1024];
  undefined1 local_58 [24];
  long local_40;
  
  bVar14 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_7 & 0xffffff00) != 0) {
    uVar13 = 0xffffffff;
    goto LAB_007733c9;
  }
  if ((param_1 == (ushort *)0x0) || (param_2 < 2)) goto LAB_007733c3;
  uVar11 = param_7 & 8;
  if ((uVar11 != 0) && (param_3 == (undefined8 *)0x0 && param_5 == 0)) {
LAB_00773400:
    uVar13 = 0xfffffffe;
    goto LAB_007733c9;
  }
  uVar7 = *param_1;
  uVar13 = 0;
  if (uVar7 != 2) {
    if (uVar7 == 10) {
      if (0x1b < param_2) goto LAB_007734c9;
    }
    else if (uVar7 == 1) {
      local_468 = local_458;
      local_460 = 0x400;
      if ((param_3 != (undefined8 *)0x0) && (param_4 != 0)) {
        if ((param_7 & 1) != 0) {
          if (uVar11 != 0) goto LAB_00773400;
LAB_0077344d:
          if (9 < param_4) {
            *param_3 = 0x736f686c61636f6c;
            *(undefined2 *)(param_3 + 1) = 0x74;
            goto LAB_0077346f;
          }
          goto LAB_007735aa;
        }
        local_668 = param_7 & 8;
        iVar2 = FUN_00768bf0(local_5f8);
        if (iVar2 == 0) {
          lVar3 = thunk_FUN_007129d0(&local_5b7);
          uVar5 = lVar3 + 1;
          if (uVar5 <= param_4) {
            uVar11 = (uint)uVar5;
            if (uVar11 < 8) {
              if ((uVar5 & 4) == 0) {
                if (uVar11 != 0) {
                  *(undefined1 *)param_3 = (undefined1)local_5b7;
                  if ((uVar5 & 2) != 0) {
                    *(undefined2 *)((long)param_3 + ((uVar5 & 0xffffffff) - 2)) =
                         *(undefined2 *)((long)&uStack_5bf + (uVar5 & 0xffffffff) + 6);
                  }
                }
              }
              else {
                *(undefined4 *)param_3 = local_5b7;
                *(undefined4 *)((long)param_3 + ((uVar5 & 0xffffffff) - 4)) =
                     *(undefined4 *)((long)&uStack_5bf + (uVar5 & 0xffffffff) + 4);
              }
            }
            else {
              *param_3 = CONCAT44(uStack_5b3,local_5b7);
              *(undefined8 *)((long)param_3 + ((uVar5 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)&uStack_5bf + (uVar5 & 0xffffffff));
              lVar3 = (long)param_3 - (long)((ulong)(param_3 + 1) & 0xfffffffffffffff8);
              puVar8 = (undefined8 *)((long)&local_5b7 - lVar3);
              puVar10 = (undefined8 *)((ulong)(param_3 + 1) & 0xfffffffffffffff8);
              for (uVar5 = (ulong)(uVar11 + (int)lVar3 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar10 = *puVar8;
                puVar8 = puVar8 + (ulong)bVar14 * -2 + 1;
                puVar10 = puVar10 + (ulong)bVar14 * -2 + 1;
              }
            }
            goto LAB_0077346f;
          }
          goto LAB_007735aa;
        }
        if (local_668 == 0) goto LAB_0077344d;
        goto LAB_007738b3;
      }
      if ((param_6 == 0) || (param_5 == 0)) goto LAB_007733c9;
      goto LAB_0077352d;
    }
LAB_007733c3:
    uVar13 = 0xfffffffa;
    goto LAB_007733c9;
  }
  if (param_2 < 0x10) goto LAB_007733c3;
LAB_007734c9:
  local_468 = local_458;
  local_460 = 0x400;
  if ((param_3 != (undefined8 *)0x0) && (param_4 != 0)) {
    if ((param_7 & 1) == 0) {
      local_628 = (undefined8 *)0x0;
      if (uVar7 == 10) {
        do {
          iVar2 = FUN_007acde0(param_1 + 4,0x10,10,local_618,local_468,local_460,&local_628,
                               &local_62c);
          if (iVar2 == 0) goto LAB_00773a90;
          if (local_62c != -1) goto LAB_00773ae6;
          if (*(int *)(in_FS_OFFSET + -0x58) != 0x22) goto LAB_00773b7b;
          cVar1 = FUN_007a2dc0(&local_468);
        } while (cVar1 != '\0');
      }
      else {
        do {
          iVar2 = FUN_007acde0(param_1 + 2,4,2,local_618,local_468,local_460);
          if (iVar2 == 0) goto LAB_00773a90;
          if (local_62c != -1) goto LAB_00773ae6;
          if (*(int *)(in_FS_OFFSET + -0x58) != 0x22) goto LAB_00773b7b;
          cVar1 = FUN_007a2dc0(&local_468);
        } while (cVar1 != '\0');
      }
      *(int *)(in_FS_OFFSET + -0x18) = local_62c;
      uVar13 = 0xfffffff6;
      goto LAB_007734a7;
    }
    if (uVar11 != 0) goto LAB_00773400;
    goto LAB_00773573;
  }
  if ((param_5 == 0) || (param_6 == 0)) goto LAB_007733c9;
LAB_00773480:
  if ((uVar7 & 0xfff7) == 2) {
    if ((param_7 & 2) == 0) {
      puVar12 = &DAT_0082ddff;
      if ((param_7 & 0x10) == 0) {
        puVar12 = &DAT_0082de03;
      }
      do {
        iVar2 = FUN_007ad290(param_1[1],puVar12,local_618,local_468,local_460,&local_620);
        if (iVar2 != 0x22) {
          if (local_620 == (long *)0x0) goto LAB_00773650;
          param_1 = (ushort *)*local_620;
          lVar3 = thunk_FUN_007129d0(param_1);
          if ((ulong)param_6 < lVar3 + 1U) goto LAB_00773687;
          goto LAB_0077354a;
        }
        cVar1 = FUN_007a2dc0(&local_468);
      } while (cVar1 != '\0');
      uVar13 = 0xfffffff6;
    }
    else {
LAB_00773650:
      iVar2 = FUN_00795560(param_5,(ulong)param_6,"%d",param_1[1] << 8 | param_1[1] >> 8);
      if (iVar2 < 0) {
        uVar13 = 0xfffffff5;
      }
      else if ((ulong)param_6 <= (ulong)(long)iVar2) goto LAB_00773687;
    }
  }
  else if (uVar7 == 1) {
LAB_0077352d:
    param_1 = param_1 + 1;
    lVar3 = thunk_FUN_007129d0(param_1);
    if ((ulong)param_6 < lVar3 + 1U) {
LAB_00773687:
      uVar13 = 0xfffffff4;
    }
    else {
LAB_0077354a:
      thunk_FUN_00713a50(param_5,param_1);
    }
  }
  else {
    uVar13 = 0xfffffffa;
  }
  goto LAB_007734a7;
LAB_00773a90:
  if (local_628 != (undefined8 *)0x0) goto LAB_00773b15;
  if (local_62c != -1) goto LAB_00773acc;
  goto LAB_00773bae;
LAB_00773ae6:
  if (local_628 != (undefined8 *)0x0) goto LAB_00773b15;
LAB_00773acc:
  if (local_62c == 2) {
    *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
    uVar13 = 0xfffffffd;
  }
  else {
LAB_00773ad5:
    uVar13 = param_7 & 0xffffff00;
    if ((param_7 & 8) == 0) {
      uVar7 = *param_1;
LAB_00773573:
      uVar5 = (ulong)param_4;
      if (uVar7 == 10) {
        lVar3 = FUN_00776980(10,param_1 + 4,param_3,uVar5);
        if (lVar3 == 0) goto LAB_007735aa;
        iVar2 = *(int *)(param_1 + 0xc);
        if (iVar2 == 0) goto LAB_0077346f;
        lVar3 = thunk_FUN_00712a40(param_3,uVar5);
        uVar5 = uVar5 - lVar3;
        if (((*(uint *)(param_1 + 4) & 0xc0ff) == 0x80fe) ||
           (((char)param_1[4] == -1 && ((*(byte *)((long)param_1 + 9) & 0xf) == 2)))) {
          lVar4 = FUN_00774150(iVar2,local_58);
          if (lVar4 == 0) goto LAB_007739d3;
          iVar2 = FUN_00795560((long)param_3 + lVar3,uVar5,"%c%s",0x25,local_58);
          if (-1 < iVar2) {
            if (uVar5 <= (ulong)(long)iVar2) goto LAB_007735aa;
            goto LAB_0077346f;
          }
        }
        else {
LAB_007739d3:
          iVar2 = FUN_00795560((long)param_3 + lVar3,uVar5,&DAT_0082ddfa,0x25,iVar2);
          if (-1 < iVar2) {
            if ((ulong)(long)iVar2 < uVar5) goto LAB_0077346f;
            goto LAB_007735aa;
          }
        }
        uVar13 = 0xfffffff5;
      }
      else {
        lVar3 = FUN_00776980(2,param_1 + 2,param_3,uVar5);
        if (lVar3 == 0) {
LAB_007735aa:
          uVar13 = 0xfffffff4;
        }
        else {
LAB_0077346f:
          if ((param_5 != 0) && (param_6 != 0)) {
            uVar7 = *param_1;
            goto LAB_00773480;
          }
        }
      }
    }
    else {
LAB_007738b3:
      uVar13 = 0xfffffffe;
    }
  }
  goto LAB_007734a7;
LAB_00773b7b:
  if (local_628 != (undefined8 *)0x0) {
LAB_00773b15:
    uVar13 = param_7 & 0xffffff00;
    if ((param_7 & 4) == 0) {
      plVar9 = (long *)*local_628;
    }
    else {
      lVar3 = FUN_00772f90();
      if (lVar3 != 0) {
        plVar9 = (long *)*local_628;
        plVar6 = (long *)FUN_004011e0(plVar9,lVar3);
        if (((plVar9 == plVar6) || (plVar6 == (long *)0x0)) || (*(char *)((long)plVar6 + -1) != '.')
           ) goto LAB_00773b22;
        *(undefined1 *)((long)plVar6 + -1) = 0;
      }
      plVar9 = (long *)*local_628;
    }
LAB_00773b22:
    if ((param_7 & 0x20) != 0) {
      uVar11 = FUN_007756c0(plVar9,&local_620);
      plVar9 = local_620;
      if (uVar11 != 0xffffff97) {
        if (uVar11 == 0) {
          lVar3 = thunk_FUN_007129d0(local_620);
          if (lVar3 + 1U <= (ulong)param_4) {
            thunk_FUN_00713a50(param_3,plVar9);
            FUN_007104f0(plVar9);
            goto LAB_0077346f;
          }
          goto LAB_007735aa;
        }
        uVar13 = uVar11;
        if (uVar11 == 0xfffffffe) goto LAB_00773ad5;
        goto LAB_007734a7;
      }
      plVar9 = (long *)*local_628;
    }
    local_620 = plVar9;
    lVar3 = thunk_FUN_007129d0();
    if (lVar3 + 1U <= (ulong)param_4) {
      thunk_FUN_00713a50(param_3,plVar9);
      goto LAB_0077346f;
    }
    goto LAB_007735aa;
  }
LAB_00773bae:
  *(undefined4 *)(in_FS_OFFSET + -0x18) = 0xffffffff;
  uVar13 = 0xfffffff5;
LAB_007734a7:
  if (local_468 != local_458) {
    FUN_007104f0();
  }
LAB_007733c9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar13;
}


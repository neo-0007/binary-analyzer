
int FUN_007812b0(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long in_FS_OFFSET;
  uint local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_0094ad10 < 0) {
LAB_007812eb:
    iVar11 = 0;
    lVar5 = thunk_FUN_007129d0(param_1);
    plVar6 = (long *)FUN_00782db0(0xd,"hosts",&DAT_0094ad20,&local_5c);
    do {
      if (plVar6 == (long *)0xffffffffffffffff) goto LAB_0078140b;
      lVar7 = FUN_00782f00(0xe,param_1,lVar5 + 1,plVar6,0x18);
      if (lVar7 == 0) goto LAB_0078140b;
      local_48 = *(undefined8 *)(lVar7 + 0x28);
      local_58 = *(undefined8 *)(lVar7 + 0x18);
      uStack_50 = *(undefined8 *)(lVar7 + 0x20);
      lVar9 = *plVar6;
      if (*(uint *)(lVar9 + 8) == local_5c) {
        local_58._4_4_ = (int)((ulong)local_58 >> 0x20);
        if (local_58._4_4_ == 1) {
          uStack_50._4_4_ = (int)((ulong)uStack_50 >> 0x20);
          lVar9 = lVar7 + 0x30;
          lVar10 = (long)((int)uStack_50 + uStack_50._4_4_ + (int)local_48);
          if ((ulong)(lVar9 + lVar10) <= (ulong)(lVar7 + 0x18 + (long)*(int *)(lVar7 + 4))) {
            iVar4 = -1;
            iVar12 = (int)local_48;
            iVar13 = (int)uStack_50;
            iVar14 = uStack_50._4_4_;
            goto LAB_0078157b;
          }
          iVar14 = -1;
        }
        else if (local_58._4_4_ == -1) {
          DAT_0094ad30 = 1;
          iVar14 = -1;
        }
        else {
          local_48._4_4_ = (undefined4)((ulong)local_48 >> 0x20);
          iVar14 = 0;
          *param_3 = local_48._4_4_;
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
        }
        piVar8 = (int *)0x0;
        goto LAB_0078148a;
      }
      iVar14 = -2;
      piVar8 = (int *)0x0;
      while( true ) {
        uVar3 = *(uint *)(lVar9 + 8);
        if (uVar3 == local_5c) {
          LOCK();
          plVar1 = plVar6 + 3;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            FUN_00782900(plVar6);
          }
          goto LAB_0078138a;
        }
        local_5c = uVar3;
        if (((uVar3 & 1) == 0) && (iVar11 = iVar11 + 1, iVar11 != 5)) break;
        LOCK();
        plVar1 = plVar6 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
LAB_007814eb:
          FUN_00782900(plVar6);
        }
        if (iVar14 == -1) goto LAB_007816d8;
        *param_2 = 0;
        plVar6 = (long *)0xffffffffffffffff;
        FUN_007104f0(piVar8);
LAB_0078140b:
        iVar4 = FUN_007830b0(param_1,lVar5 + 1,0xe,&local_58);
        if (iVar4 == -1) {
          DAT_0094ad30 = 1;
          iVar14 = -1;
          piVar8 = (int *)0x0;
        }
        else {
          if (local_58._4_4_ == 1) {
            lVar9 = 0;
            lVar10 = (long)((int)uStack_50 + uStack_50._4_4_ + (int)local_48);
            iVar12 = (int)local_48;
            iVar13 = (int)uStack_50;
            iVar14 = uStack_50._4_4_;
LAB_0078157b:
            piVar8 = (int *)FUN_007101b0(lVar10 + 0x20);
            if (piVar8 == (int *)0x0) {
              iVar14 = -1;
              *param_3 = 0xffffffff;
            }
            else {
              piVar2 = piVar8 + 8;
              *piVar8 = iVar13;
              *(long *)(piVar8 + 4) = (long)iVar14 + (long)piVar2;
              *(int **)(piVar8 + 6) = piVar2;
              if (iVar12 == 0) {
                piVar8[2] = 0;
                piVar8[3] = 0;
                if (lVar9 == 0) goto LAB_0078164d;
                thunk_FUN_00713a50(piVar2,lVar9);
LAB_0078162a:
                *param_2 = (long)piVar8;
                iVar14 = 0;
              }
              else {
                lVar7 = (long)iVar14 + (long)piVar2 + (long)iVar13;
                *(long *)(piVar8 + 2) = lVar7;
                if (lVar9 == 0) {
LAB_0078164d:
                  lVar7 = FUN_007825f0(iVar4,piVar2);
                  if (lVar10 == lVar7) goto LAB_0078162a;
                  iVar14 = -1;
                  FUN_007104f0(piVar8);
                  *param_3 = 0xffffffff;
                }
                else {
                  thunk_FUN_00713a50(piVar2,lVar9);
                  if (*(char *)(lVar7 + -1 + (long)iVar12) == '\0') goto LAB_0078162a;
                  iVar14 = -2;
                  if (*(uint *)(*plVar6 + 8) == local_5c) {
                    iVar14 = -1;
                    FUN_007104f0(piVar8);
                  }
                }
              }
            }
            if (iVar4 == -1) goto LAB_0078147c;
          }
          else if (local_58._4_4_ == -1) {
            DAT_0094ad30 = 1;
            piVar8 = (int *)0x0;
            iVar14 = -1;
          }
          else {
            iVar14 = 0;
            piVar8 = (int *)0x0;
            *param_3 = local_48._4_4_;
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
          }
          FUN_0076e4b0(iVar4);
        }
LAB_0078147c:
        if (plVar6 == (long *)0xffffffffffffffff) goto LAB_0078138a;
LAB_0078148a:
        lVar9 = *plVar6;
      }
      if (iVar14 == -1) {
        LOCK();
        plVar1 = plVar6 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) goto LAB_007814eb;
LAB_007816d8:
        iVar14 = -1;
        goto LAB_0078138a;
      }
      *param_2 = 0;
      FUN_007104f0(piVar8);
    } while( true );
  }
  if (DAT_0094ad10 == 0) {
    lVar5 = FUN_006e8e30("LOCALDOMAIN");
    if (lVar5 == 0) {
      DAT_0094ad10 = -1;
      goto LAB_007812eb;
    }
    DAT_0094ad10 = 1;
  }
  DAT_0094ad30 = 1;
  iVar14 = -1;
LAB_0078138a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar14;
}


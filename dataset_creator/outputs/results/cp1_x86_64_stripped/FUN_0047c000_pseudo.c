
/* WARNING: Removing unreachable block (ram,0x0047c07d) */
/* WARNING: Removing unreachable block (ram,0x0047c08f) */

long FUN_0047c000(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  long in_FS_OFFSET;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c0;
  undefined8 local_b0;
  
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = FUN_0042a000(param_1,1);
  if (lVar3 != 0) {
    iVar2 = 2;
    do {
      while( true ) {
        uVar4 = FUN_0042a260(param_1,lVar3);
        lVar5 = FUN_0076efe0(0x13e,uVar4,lVar3,0);
        if (0 < lVar5) break;
        if (((lVar5 != 0) && (piVar9 = (int *)FUN_006d2700(), *piVar9 != 4)) ||
           (bVar1 = iVar2 < 1, iVar2 = iVar2 + -1, bVar1)) goto LAB_0047c0d8;
      }
      FUN_0042a330(param_1,lVar5,lVar5 * 8);
      lVar3 = lVar3 - lVar5;
      iVar2 = 2;
    } while (lVar3 != 0);
  }
LAB_0047c0d8:
  local_e0 = FUN_00429fb0(param_1);
  if (local_e0 == 0) {
    iVar2 = FUN_0047bc70();
    if (iVar2 != 0) {
      piVar9 = &DAT_00940f00;
      lVar3 = FUN_0042a000(param_1,1);
      local_e0 = 0;
      if (lVar3 != 0) {
        do {
          iVar2 = FUN_0047bbd0(piVar9);
          if (iVar2 == 0) {
            iVar2 = FUN_0076d890((&PTR_s__dev_urandom_008ffca0)[local_e0],0);
            *piVar9 = iVar2;
            if (iVar2 != -1) {
              iVar2 = FUN_0076d7f0(iVar2);
              if (iVar2 != -1) {
                *(undefined8 *)(piVar9 + 2) = local_d8;
                *(undefined8 *)(piVar9 + 4) = local_d0;
                piVar9[6] = local_c0;
                *(undefined8 *)(piVar9 + 8) = local_b0;
                goto LAB_0047c1b9;
              }
              FUN_0076dc30(*piVar9);
              *piVar9 = -1;
            }
          }
          else {
LAB_0047c1b9:
            iVar2 = *piVar9;
            if (iVar2 != -1) {
              iVar8 = 2;
              do {
                while( true ) {
                  uVar4 = FUN_0042a260(param_1,lVar3);
                  lVar5 = FUN_0076d9c0(iVar2,uVar4,lVar3);
                  if (lVar5 < 1) break;
                  FUN_0042a330(param_1,lVar5,lVar5 * 8);
                  lVar3 = lVar3 - lVar5;
                  iVar8 = 2;
                  if (lVar3 == 0) goto LAB_0047c22c;
                }
                if ((lVar5 != 0) && (piVar6 = (int *)FUN_006d2700(), *piVar6 != 4))
                goto LAB_0047c236;
                bVar1 = 0 < iVar8;
                iVar8 = iVar8 + -1;
              } while (bVar1);
              if (lVar5 == 0) {
LAB_0047c22c:
                if (DAT_0093bc84 == 0) {
LAB_0047c236:
                  iVar2 = FUN_0047bbd0(piVar9);
                  goto joined_r0x0047c2d3;
                }
              }
              else {
                iVar2 = FUN_0047bbd0(piVar9);
joined_r0x0047c2d3:
                if (iVar2 != 0) {
                  FUN_0076dc30(*piVar9);
                }
                *piVar9 = -1;
              }
              lVar3 = FUN_0042a000(param_1);
            }
          }
          local_e0 = local_e0 + 1;
          piVar9 = piVar9 + 10;
        } while ((lVar3 != 0) && (local_e0 < 4));
      }
      local_e0 = FUN_00429fb0(param_1);
      if (local_e0 != 0) goto LAB_0047c0ea;
    }
    if (lVar7 == *(long *)(in_FS_OFFSET + 0x28)) {
      lVar7 = FUN_00429fb0(param_1);
      return lVar7;
    }
  }
  else {
LAB_0047c0ea:
    if (lVar7 == *(long *)(in_FS_OFFSET + 0x28)) {
      return local_e0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


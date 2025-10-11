
void FUN_006ce1f0(long param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong local_40 [2];
  
  uVar5 = *(ushort *)(param_1 + 0x20) >> 3;
  bVar3 = (byte)uVar5;
  if (bVar3 == 0xff) {
    uVar8 = 0;
    uVar11 = 0xff;
  }
  else {
    uVar11 = (uint)bVar3;
    bVar3 = bVar3 & 0x70;
    if (bVar3 == 0x20) {
      uVar8 = *(undefined8 *)(param_1 + 8);
    }
    else {
      if (bVar3 < 0x21) {
        if ((uVar5 & 0x60) != 0) {
code_r0x004046db:
                    /* WARNING: Subroutine does not return */
          FUN_00404713();
        }
      }
      else {
        if (bVar3 == 0x30) {
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          goto LAB_006ce240;
        }
        if (bVar3 != 0x50) {
          FUN_004046db();
          return;
        }
      }
      uVar8 = 0;
    }
  }
LAB_006ce240:
  uVar1 = *param_3;
  lVar10 = 0;
  do {
    if (uVar1 == 0) {
      return;
    }
    if (param_3[1] != 0) {
      if (((*(byte *)(param_1 + 0x20) & 4) == 0) ||
         (lVar9 = (long)param_3 + (4 - (long)(int)param_3[1]), lVar9 == lVar10)) {
        if (uVar11 == 0) goto LAB_006ce2c0;
        FUN_006cdb90(uVar11 & 0xff,uVar8,param_3 + 2,local_40);
        uVar6 = uVar11;
        if ((char)uVar11 == -1) {
          uVar7 = 0;
          goto LAB_006ce352;
        }
LAB_006ce337:
        bVar3 = (byte)uVar11;
        lVar9 = lVar10;
joined_r0x006ce340:
        bVar3 = bVar3 & 7;
        lVar10 = lVar9;
        uVar11 = uVar6;
        if (bVar3 == 2) {
          uVar7 = 0xffff;
        }
        else {
          if (bVar3 < 3) {
            if (bVar3 != 0) {
              FUN_004046db();
              return;
            }
          }
          else {
            uVar7 = 0xffffffff;
            if (bVar3 == 3) goto LAB_006ce352;
            if (bVar3 != 4) {
              FUN_004046db();
              return;
            }
          }
          uVar7 = 0xffffffffffffffff;
        }
LAB_006ce352:
        uVar7 = uVar7 & local_40[0];
      }
      else {
        uVar6 = FUN_006cdce0(lVar9);
        bVar3 = (byte)uVar6;
        lVar10 = lVar9;
        if (bVar3 == 0xff) {
          FUN_006cdb90(0xff,0,param_3 + 2,local_40);
          uVar7 = 0;
          uVar8 = 0;
          uVar11 = uVar6;
          goto LAB_006ce352;
        }
        bVar4 = bVar3 & 0x70;
        if (bVar4 == 0x20) {
          uVar8 = *(undefined8 *)(param_1 + 8);
joined_r0x006ce422:
          if (uVar6 != 0) {
            FUN_006cdb90(uVar6 & 0xff,uVar8,param_3 + 2,local_40);
            uVar11 = uVar6 & 0xff;
            goto LAB_006ce337;
          }
        }
        else {
          if (bVar4 < 0x21) {
            if ((uVar6 & 0x60) != 0) goto code_r0x004046db;
          }
          else {
            if (bVar4 == 0x30) {
              uVar8 = *(undefined8 *)(param_1 + 0x10);
              goto joined_r0x006ce422;
            }
            if (bVar4 != 0x50) {
              FUN_004046db();
              return;
            }
          }
          uVar8 = 0;
          if (uVar6 != 0) {
            FUN_006cdb90(uVar6 & 0xff,0,param_3 + 2,local_40);
            uVar8 = 0;
            goto joined_r0x006ce340;
          }
        }
LAB_006ce2c0:
        uVar11 = 0;
        uVar7 = *(ulong *)(param_3 + 2);
      }
      if ((uVar7 != 0) && (lVar9 = *param_2, lVar9 != 0)) {
        lVar2 = *(long *)(lVar9 + 8);
        *(long *)(lVar9 + 8) = lVar2 + 1;
        *(uint **)(lVar9 + 0x10 + lVar2 * 8) = param_3;
      }
    }
    param_3 = (uint *)((long)param_3 + (ulong)uVar1 + 4);
    uVar1 = *param_3;
  } while( true );
}


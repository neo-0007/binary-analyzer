
uint * linear_search_fdes(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong local_48;
  ulong local_40 [2];
  
  uVar5 = *(ushort *)(param_1 + 0x20) >> 3;
  bVar4 = (byte)uVar5;
  if (bVar4 == 0xff) {
    uVar8 = 0;
    uVar6 = 0xff;
  }
  else {
    uVar6 = (uint)bVar4;
    bVar4 = bVar4 & 0x70;
    if (bVar4 == 0x20) {
      uVar8 = *(undefined8 *)(param_1 + 8);
    }
    else {
      if (bVar4 < 0x21) {
        if ((uVar5 & 0x60) != 0) {
code_r0x00404558:
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      else {
        if (bVar4 == 0x30) {
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          goto LAB_006c4af0;
        }
        if (bVar4 != 0x50) {
                    /* WARNING: Subroutine does not return */
          linear_search_fdes_cold();
        }
      }
      uVar8 = 0;
    }
  }
LAB_006c4af0:
  uVar1 = *param_2;
  lVar2 = 0;
  do {
    if (uVar1 == 0) {
      return (uint *)0x0;
    }
    lVar10 = lVar2;
    if (param_2[1] != 0) {
      if (((*(byte *)(param_1 + 0x20) & 4) == 0) ||
         (lVar10 = (long)param_2 + (4 - (long)(int)param_2[1]), lVar10 == lVar2)) {
joined_r0x006c4bae:
        lVar10 = lVar2;
        if (uVar6 != 0) {
          bVar4 = (byte)uVar6;
          uVar7 = read_encoded_value_with_base(uVar6 & 0xff,uVar8,param_2 + 2,&local_48);
          read_encoded_value_with_base(uVar6 & 0xf,0,uVar7,local_40);
          if (bVar4 == 0xff) {
            uVar9 = 0;
          }
          else {
LAB_006c4bef:
            bVar4 = bVar4 & 7;
            if (bVar4 == 2) {
              uVar9 = 0xffff;
            }
            else {
              if (bVar4 < 3) {
                if (bVar4 != 0) {
                    /* WARNING: Subroutine does not return */
                  linear_search_fdes_cold();
                }
              }
              else {
                uVar9 = 0xffffffff;
                if (bVar4 == 3) goto LAB_006c4c08;
                if (bVar4 != 4) {
                    /* WARNING: Subroutine does not return */
                  linear_search_fdes_cold();
                }
              }
              uVar9 = 0xffffffffffffffff;
            }
          }
LAB_006c4c08:
          if (((local_48 & uVar9) != 0) && (param_3 - local_48 < local_40[0])) {
            return param_2;
          }
          goto LAB_006c4b89;
        }
      }
      else {
        uVar6 = get_cie_encoding(lVar10);
        bVar4 = (byte)uVar6;
        if (bVar4 == 0xff) {
          uVar8 = read_encoded_value_with_base(0xff,0,param_2 + 2,&local_48);
          read_encoded_value_with_base(uVar6 & 0xf,0,uVar8,local_40);
          uVar9 = 0;
          uVar8 = 0;
          goto LAB_006c4c08;
        }
        bVar3 = bVar4 & 0x70;
        if (bVar3 != 0x20) {
          if (bVar3 < 0x21) {
            if ((uVar6 & 0x60) != 0) goto code_r0x00404558;
          }
          else {
            if (bVar3 == 0x30) {
              uVar8 = *(undefined8 *)(param_1 + 0x10);
              goto joined_r0x006c4cf2;
            }
            if (bVar3 != 0x50) {
                    /* WARNING: Subroutine does not return */
              linear_search_fdes_cold();
            }
          }
          uVar8 = 0;
          lVar2 = lVar10;
          goto joined_r0x006c4bae;
        }
        uVar8 = *(undefined8 *)(param_1 + 8);
joined_r0x006c4cf2:
        if (uVar6 != 0) {
          uVar7 = read_encoded_value_with_base(uVar6 & 0xff,uVar8,param_2 + 2,&local_48);
          read_encoded_value_with_base(uVar6 & 0xf,0,uVar7,local_40);
          goto LAB_006c4bef;
        }
      }
      local_48 = *(ulong *)(param_2 + 2);
      local_40[0] = *(ulong *)(param_2 + 4);
      uVar6 = 0;
      if ((local_48 != 0) && (param_3 - local_48 < local_40[0])) {
        return param_2;
      }
    }
LAB_006c4b89:
    param_2 = (uint *)((long)param_2 + (ulong)uVar1 + 4);
    uVar1 = *param_2;
    lVar2 = lVar10;
  } while( true );
}


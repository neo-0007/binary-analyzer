
/* WARNING: Removing unreachable block (ram,0x006d0c1d) */
/* WARNING: Removing unreachable block (ram,0x006d0bc2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d09b0(void)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  uint in_XCR0;
  uint local_134 [30];
  int local_bc;
  int local_b4 [30];
  int local_3c;
  
  _DAT_0094aef0 = DAT_0094aee0 & 0x17888110 | _DAT_0094aef0;
  DAT_0094aeec = DAT_0094aedc & 0x40000000 |
                 DAT_0094aedc & 0x2d82203 | DAT_0094aeec | DAT_0094aedc & 0x8000000;
  uVar5 = DAT_0094aef8 & 0x218c0318 | DAT_0094af08;
  uVar3 = DAT_0094af1c & 0x200161 | DAT_0094af2c;
  _DAT_0094af30 = DAT_0094af20 & 0x8000000 | _DAT_0094af30;
  _DAT_0094afa4 = DAT_0094af94 & 0x1c00 | _DAT_0094afa4;
  _DAT_0094af2c = CONCAT44(_DAT_0094af30,uVar3);
  _DAT_0094af88 = _DAT_0094af88 | DAT_0094af78 & 0x200;
  _DAT_0094afe8 = _DAT_0094afe8 | DAT_0094afd8 & 0x10;
  DAT_0094af08 = DAT_0094aef8 & 0x800 | uVar5;
  if ((DAT_0094af00 & 0x800) != 0) {
    DAT_0094af08 = uVar5;
  }
  _DAT_0094af10 = DAT_0094af00 & 0x114810 | _DAT_0094af10;
  _DAT_0094af0c = DAT_0094aefc & 0x1a4001b1 | _DAT_0094af0c;
  if ((DAT_0094aedc & 0x8000000) != 0) {
    if ((in_XCR0 & 6) == 6) {
      if ((DAT_0094aedc & 0x10000000) != 0) {
        if ((DAT_0094aef8 & 0x20) != 0) {
          DAT_0094aff4 = DAT_0094aff4 | 0x200;
          DAT_0094af08 = DAT_0094af08 | 0x20;
        }
        DAT_0094aeec = DAT_0094aedc & 0x20001000 | DAT_0094aeec | 0x10000000;
        _DAT_0094afa4 = DAT_0094af94 & 0x10 | _DAT_0094afa4;
        _DAT_0094af0c = DAT_0094aefc & 0x600 | _DAT_0094af0c;
        _DAT_0094af2c = CONCAT44(_DAT_0094af30,DAT_0094af1c & 0x800 | uVar3);
      }
      if (((in_XCR0 & 0xe0) == 0xe0) && ((DAT_0094aef8 & 0x10000) != 0)) {
        _DAT_0094af0c = _DAT_0094af0c | DAT_0094aefc & 0x5842;
        DAT_0094af08 = DAT_0094aef8 & 0xdc220000 | DAT_0094af08 | 0x10000;
        _DAT_0094afa4 = _DAT_0094afa4 | DAT_0094af94 & 0x20;
        _DAT_0094af10 = DAT_0094af00 & 0x80010c | _DAT_0094af10;
      }
    }
    if ((in_XCR0 & 0x60000) == 0x60000) {
      _DAT_0094af10 = _DAT_0094af10 | DAT_0094af00 & 0x3400000;
    }
    DAT_0094aeec = DAT_0094aeec | 0x4000000;
    DAT_0094af44 = DAT_0094af34 & 0x17 | DAT_0094af44;
    if (0xc < DAT_0094aec4) {
      lVar1 = cpuid_Processor_Extended_States_info(0xd);
      if (*(int *)(lVar1 + 4) != 0) {
        DAT_0094b008 = *(int *)(lVar1 + 4) + 0x7fU & 0xffffffc0;
        DAT_0094b000 = (ulong)DAT_0094b008;
        if ((DAT_0094af34 & 2) != 0) {
          piVar6 = local_b4;
          puVar7 = local_134;
          uVar3 = 2;
          local_134[1] = 0x240;
          iVar8 = 3;
          do {
            puVar7 = puVar7 + 1;
            if ((0xeeU >> (uVar3 & 0x1f) & 1) == 0) {
              piVar6[1] = 0;
              if (uVar3 != 2) {
                *puVar7 = *piVar6 + puVar7[-1];
LAB_006d0c3d:
                if (iVar8 == 0x20) goto LAB_006d0d79;
              }
            }
            else {
              piVar2 = (int *)cpuid_Processor_Extended_States_info(0xd);
              uVar5 = piVar2[3];
              piVar6[1] = *piVar2;
              if (uVar3 != 2) {
                uVar4 = *piVar6 + puVar7[-1];
                if ((uVar5 & 2) != 0) {
                  uVar4 = uVar4 + 0x3f & 0xffffffc0;
                }
                *puVar7 = uVar4;
                goto LAB_006d0c3d;
              }
            }
            uVar3 = uVar3 + 1;
            iVar8 = iVar8 + 1;
            piVar6 = piVar6 + 1;
          } while( true );
        }
      }
    }
  }
LAB_006d0b54:
  if ((DAT_0094aefc & 0x10) != 0) {
    _DAT_0094af0c = _DAT_0094af0c | 8;
  }
  if ((DAT_0094afb8 & 1) != 0) {
    _DAT_0094af0c = _DAT_0094af0c | DAT_0094aefc & 0x800000;
    _DAT_0094afc8 = DAT_0094afb8 & 4 | _DAT_0094afc8 | 1;
  }
  DAT_0094aff8 = 0;
  if (((_DAT_0094aef0 & 0x8100) == 0x8100) && (DAT_0094aff8 = DAT_0094aee0 & 1, DAT_0094aff8 != 0))
  {
    if ((_DAT_0094aef0 & 0x7800000) == 0x7800000) {
      if ((DAT_0094aeec & 0x2000) != 0) {
        if (((_DAT_0094af2c & 1) != 0) &&
           (DAT_0094aff8 = DAT_0094af2c & 1, (DAT_0094aeec & 0x980201) == 0x980201)) {
          if (((DAT_0094aeec & 0x10000000) != 0) && ((DAT_0094af08 & 0x20) != 0)) {
            if ((DAT_0094aeec & 0x20001000) != 0x20001000) {
              DAT_0094aff8 = 3;
              return;
            }
            if (((_DAT_0094af2c & 0x20) != 0) && ((DAT_0094aeec & 0x400000) != 0)) {
              if ((DAT_0094af08 & 0x50030000) != 0x50030000) {
                DAT_0094aff8 = 7;
                return;
              }
              DAT_0094aff8 = ((int)DAT_0094af08 >> 0x1f & 8U) + 7;
              return;
            }
          }
          DAT_0094aff8 = 3;
        }
      }
    }
    else {
      DAT_0094aff8 = 0;
    }
  }
  return;
LAB_006d0d79:
  if (local_3c + local_bc != 0) {
    DAT_0094af44 = DAT_0094af44 | 2;
    DAT_0094b000 = (ulong)(local_3c + local_bc + 0x7fU & 0xffffffc0);
  }
  goto LAB_006d0b54;
}


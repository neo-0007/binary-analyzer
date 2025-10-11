
/* WARNING: Removing unreachable block (ram,0x006c720d) */
/* WARNING: Removing unreachable block (ram,0x006c71b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_active_constprop_0(void)

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
  
  _DAT_0093def0 = DAT_0093dee0 & 0x17888110 | _DAT_0093def0;
  DAT_0093deec = DAT_0093dedc & 0x40000000 |
                 DAT_0093dedc & 0x2d82203 | DAT_0093deec | DAT_0093dedc & 0x8000000;
  uVar5 = DAT_0093def8 & 0x218c0318 | DAT_0093df08;
  uVar3 = DAT_0093df1c & 0x200161 | DAT_0093df2c;
  _DAT_0093df30 = DAT_0093df20 & 0x8000000 | _DAT_0093df30;
  _DAT_0093dfa4 = DAT_0093df94 & 0x1c00 | _DAT_0093dfa4;
  _DAT_0093df2c = CONCAT44(_DAT_0093df30,uVar3);
  _DAT_0093df88 = _DAT_0093df88 | DAT_0093df78 & 0x200;
  _DAT_0093dfe8 = _DAT_0093dfe8 | DAT_0093dfd8 & 0x10;
  DAT_0093df08 = DAT_0093def8 & 0x800 | uVar5;
  if ((DAT_0093df00 & 0x800) != 0) {
    DAT_0093df08 = uVar5;
  }
  _DAT_0093df10 = DAT_0093df00 & 0x114810 | _DAT_0093df10;
  _DAT_0093df0c = DAT_0093defc & 0x1a4001b1 | _DAT_0093df0c;
  if ((DAT_0093dedc & 0x8000000) != 0) {
    if ((in_XCR0 & 6) == 6) {
      if ((DAT_0093dedc & 0x10000000) != 0) {
        if ((DAT_0093def8 & 0x20) != 0) {
          DAT_0093dff4 = DAT_0093dff4 | 0x200;
          DAT_0093df08 = DAT_0093df08 | 0x20;
        }
        DAT_0093deec = DAT_0093dedc & 0x20001000 | DAT_0093deec | 0x10000000;
        _DAT_0093dfa4 = DAT_0093df94 & 0x10 | _DAT_0093dfa4;
        _DAT_0093df0c = DAT_0093defc & 0x600 | _DAT_0093df0c;
        _DAT_0093df2c = CONCAT44(_DAT_0093df30,DAT_0093df1c & 0x800 | uVar3);
      }
      if (((in_XCR0 & 0xe0) == 0xe0) && ((DAT_0093def8 & 0x10000) != 0)) {
        _DAT_0093df0c = _DAT_0093df0c | DAT_0093defc & 0x5842;
        DAT_0093df08 = DAT_0093def8 & 0xdc220000 | DAT_0093df08 | 0x10000;
        _DAT_0093dfa4 = _DAT_0093dfa4 | DAT_0093df94 & 0x20;
        _DAT_0093df10 = DAT_0093df00 & 0x80010c | _DAT_0093df10;
      }
    }
    if ((in_XCR0 & 0x60000) == 0x60000) {
      _DAT_0093df10 = _DAT_0093df10 | DAT_0093df00 & 0x3400000;
    }
    DAT_0093deec = DAT_0093deec | 0x4000000;
    _DAT_0093df44 = DAT_0093df34 & 0x17 | _DAT_0093df44;
    if (0xc < DAT_0093dec4) {
      lVar1 = cpuid_Processor_Extended_States_info(0xd);
      if (*(int *)(lVar1 + 4) != 0) {
        DAT_0093e008 = *(int *)(lVar1 + 4) + 0x7fU & 0xffffffc0;
        _DAT_0093e000 = (ulong)DAT_0093e008;
        if ((DAT_0093df34 & 2) != 0) {
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
LAB_006c722d:
                if (iVar8 == 0x20) goto LAB_006c7369;
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
                goto LAB_006c722d;
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
LAB_006c7144:
  if ((DAT_0093defc & 0x10) != 0) {
    _DAT_0093df0c = _DAT_0093df0c | 8;
  }
  if ((DAT_0093dfb8 & 1) != 0) {
    _DAT_0093df0c = _DAT_0093df0c | DAT_0093defc & 0x800000;
    _DAT_0093dfc8 = DAT_0093dfb8 & 4 | _DAT_0093dfc8 | 1;
  }
  _DAT_0093dff8 = 0;
  if (((_DAT_0093def0 & 0x8100) == 0x8100) && (_DAT_0093dff8 = DAT_0093dee0 & 1, _DAT_0093dff8 != 0)
     ) {
    if ((_DAT_0093def0 & 0x7800000) == 0x7800000) {
      if ((DAT_0093deec & 0x2000) != 0) {
        if (((_DAT_0093df2c & 1) != 0) &&
           (_DAT_0093dff8 = DAT_0093df2c & 1, (DAT_0093deec & 0x980201) == 0x980201)) {
          if (((DAT_0093deec & 0x10000000) != 0) && ((DAT_0093df08 & 0x20) != 0)) {
            if ((DAT_0093deec & 0x20001000) != 0x20001000) {
              _DAT_0093dff8 = 3;
              return;
            }
            if (((_DAT_0093df2c & 0x20) != 0) && ((DAT_0093deec & 0x400000) != 0)) {
              if ((DAT_0093df08 & 0x50030000) != 0x50030000) {
                _DAT_0093dff8 = 7;
                return;
              }
              _DAT_0093dff8 = ((int)DAT_0093df08 >> 0x1f & 8U) + 7;
              return;
            }
          }
          _DAT_0093dff8 = 3;
        }
      }
    }
    else {
      _DAT_0093dff8 = 0;
    }
  }
  return;
LAB_006c7369:
  if (local_3c + local_bc != 0) {
    _DAT_0093df44 = _DAT_0093df44 | 2;
    _DAT_0093e000 = (ulong)(local_3c + local_bc + 0x7fU & 0xffffffc0);
  }
  goto LAB_006c7144;
}


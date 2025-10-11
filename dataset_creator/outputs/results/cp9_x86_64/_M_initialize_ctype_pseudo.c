
/* std::ctype<wchar_t>::_M_initialize_ctype() */

void __thiscall std::ctype<wchar_t>::_M_initialize_ctype(ctype<wchar_t> *this)

{
  ulong uVar1;
  ctype<wchar_t> cVar2;
  int iVar3;
  wint_t wVar4;
  __locale_t __dataset;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ushort uVar8;
  
  lVar7 = 0;
  __dataset = uselocale(*(__locale_t *)(this + 0x10));
  do {
    iVar3 = wctob((wint_t)lVar7);
    if (iVar3 == -1) {
      cVar2 = (ctype<wchar_t>)0x0;
      goto LAB_0063b1cb;
    }
    this[lVar7 + 0x19] = SUB41(iVar3,0);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x80);
  cVar2 = (ctype<wchar_t>)0x1;
LAB_0063b1cb:
  this[0x18] = cVar2;
  lVar7 = 0;
  do {
    wVar4 = btowc((int)lVar7);
    *(wint_t *)(this + lVar7 * 4 + 0x9c) = wVar4;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x100);
  uVar6 = 0;
  do {
    while( true ) {
      uVar1 = uVar6 + 1;
      iVar3 = 1 << ((byte)uVar6 & 0x1f);
      if (7 < uVar6) break;
      uVar8 = (ushort)(iVar3 << 8);
      *(ushort *)(this + uVar1 * 2 + 0x49a) = uVar8;
      uVar5 = _M_convert_to_wmask(this,uVar8);
      *(undefined8 *)(this + uVar1 * 8 + 0x4b8) = uVar5;
      uVar6 = uVar1;
    }
    uVar8 = (ushort)((uint)iVar3 >> 8);
    *(ushort *)(this + uVar1 * 2 + 0x49a) = uVar8;
    uVar5 = _M_convert_to_wmask(this,uVar8);
    *(undefined8 *)(this + uVar1 * 8 + 0x4b8) = uVar5;
    uVar6 = uVar1;
  } while (uVar1 != 0xc);
  uselocale(__dataset);
  return;
}


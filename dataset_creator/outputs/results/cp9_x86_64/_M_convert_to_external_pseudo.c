
/* std::wfilebuf::_M_convert_to_external(wchar_t*, long) */

bool __thiscall std::wfilebuf::_M_convert_to_external(wfilebuf *this,wchar_t *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 **ppuVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar13;
  undefined1 *puVar14;
  char *pcVar15;
  long in_FS_OFFSET;
  undefined8 *local_78;
  long *local_70;
  uint local_64;
  long local_60;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 **ppuVar12;
  
  ppuVar12 = &local_78;
  ppuVar11 = &local_78;
  ppuVar13 = &local_78;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(this + 200) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    __throw_bad_cast();
  }
  cVar6 = (**(code **)(**(long **)(this + 200) + 0x30))();
  if (cVar6 == '\0') {
    iVar7 = (**(code **)(**(long **)(this + 200) + 0x40))();
    uVar10 = iVar7 * param_2 + 0x17;
    ppuVar5 = &local_78;
    while (ppuVar12 != (undefined8 **)((long)&local_78 - (uVar10 & 0xfffffffffffff000))) {
      ppuVar11 = (undefined8 **)((long)ppuVar5 + -0x1000);
      *(undefined8 *)((long)ppuVar5 + -8) = *(undefined8 *)((long)ppuVar5 + -8);
      ppuVar12 = (undefined8 **)((long)ppuVar5 + -0x1000);
      ppuVar5 = (undefined8 **)((long)ppuVar5 + -0x1000);
    }
    uVar10 = (ulong)((uint)uVar10 & 0xff0);
    lVar4 = -uVar10;
    ppuVar13 = (undefined8 **)((long)ppuVar11 + lVar4);
    if (uVar10 != 0) {
      *(undefined8 *)((long)ppuVar11 + -8) = *(undefined8 *)((long)ppuVar11 + -8);
    }
    plVar1 = *(long **)(this + 200);
    local_70 = &local_50;
    pcVar15 = (char *)((ulong)((long)ppuVar11 + lVar4 + 0xf) & 0xfffffffffffffff0);
    local_78 = &local_48;
    lVar9 = *plVar1;
    *(long **)((long)ppuVar11 + lVar4 + -8) = local_70;
    *(char **)((long)ppuVar11 + lVar4 + -0x10) = pcVar15 + iVar7 * param_2;
    pcVar2 = *(code **)(lVar9 + 0x10);
    *(undefined8 *)((long)ppuVar11 + lVar4 + -0x18) = 0x664b13;
    uVar8 = (*pcVar2)(plVar1,this + 0x84,param_1,param_1 + param_2,local_78,pcVar15);
    if (uVar8 < 2) {
      local_60 = local_50;
      param_2 = local_50 - (long)pcVar15;
      *(undefined8 *)((long)ppuVar11 + lVar4 + -8) = 0x664b83;
      local_64 = uVar8;
      lVar9 = __basic_file<char>::xsputn((__basic_file<char> *)(this + 0x68),pcVar15,param_2);
      puVar14 = (undefined1 *)((long)ppuVar11 + lVar4);
      if ((param_2 == lVar9) &&
         (puVar14 = (undefined1 *)((long)ppuVar11 + lVar4), (local_64 & 1) != 0)) {
        plVar1 = *(long **)(this + 200);
        uVar3 = *(undefined8 *)(this + 0x28);
        lVar9 = *plVar1;
        *(long **)((long)ppuVar11 + lVar4 + -8) = local_70;
        *(long *)((long)ppuVar11 + lVar4 + -0x10) = local_60;
        pcVar2 = *(code **)(lVar9 + 0x10);
        *(undefined8 *)((long)ppuVar11 + lVar4 + -0x18) = 0x664bb8;
        iVar7 = (*pcVar2)(plVar1,this + 0x84,local_48,uVar3,local_78,pcVar15);
        if (iVar7 == 2) goto LAB_00664beb;
        param_2 = local_50 - (long)pcVar15;
        *(undefined8 *)((long)ppuVar11 + lVar4 + -8) = 0x664bd4;
        lVar9 = __basic_file<char>::xsputn((__basic_file<char> *)(this + 0x68),pcVar15,param_2);
        puVar14 = (undefined1 *)((long)ppuVar11 + lVar4);
      }
      goto LAB_00664b32;
    }
    if (uVar8 != 3) {
LAB_00664beb:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)ppuVar11 + lVar4 + -8) = 0x664bf7;
      __throw_ios_failure("basic_filebuf::_M_convert_to_external conversion error");
    }
  }
  *(undefined8 *)((long)ppuVar13 + -8) = 0x664b32;
  lVar9 = __basic_file<char>::xsputn((__basic_file<char> *)(this + 0x68),(char *)param_1,param_2);
  puVar14 = (undefined1 *)ppuVar13;
LAB_00664b32:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar14 + -8) = &UNK_00664c01;
    __stack_chk_fail_local();
  }
  return lVar9 == param_2;
}


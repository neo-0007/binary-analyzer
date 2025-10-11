
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__istream_extract<wchar_t, std::char_traits<wchar_t> >(std::wistream&, wchar_t*, long)
    */

void std::__istream_extract<wchar_t,std::char_traits<wchar_t>>
               (wistream *param_1,wchar_t *param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  wchar_t wVar6;
  ctype *pcVar7;
  long lVar8;
  uint uVar9;
  wchar_t *pwVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  sentry local_49;
  locale local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  wistream::sentry::sentry(&local_49,param_1,false);
  lVar8 = *(long *)param_1;
  if (local_49 == (sentry)0x0) {
    uVar9 = 4;
  }
  else {
    lVar11 = *(long *)(param_1 + *(long *)(lVar8 + -0x18) + 0x10);
    if ((lVar11 < 1) || (param_3 <= lVar11)) {
      lVar11 = param_3;
    }
    locale::locale(local_48,(locale *)(param_1 + *(long *)(lVar8 + -0x18) + 0xd0));
                    /* try { // try from 006742ec to 006742f0 has its CatchHandler @ 0067451b */
    pcVar7 = use_facet<std::ctype<wchar_t>>(local_48);
    locale::~locale(local_48);
    plVar1 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xe8);
    if ((wchar_t *)plVar1[2] < (wchar_t *)plVar1[3]) {
      wVar6 = *(wchar_t *)plVar1[2];
    }
    else {
                    /* try { // try from 006744a6 to 006744a8 has its CatchHandler @ 00674527 */
      wVar6 = (**(code **)(*plVar1 + 0x48))(plVar1);
    }
    lVar11 = lVar11 + -1;
    if (lVar11 < 1) {
      lVar8 = *(long *)param_1;
      *param_2 = L'\0';
      uVar9 = 4;
      *(undefined8 *)(param_1 + *(long *)(lVar8 + -0x18) + 0x10) = 0;
    }
    else if (wVar6 == L'\xffffffff') {
      lVar8 = *(long *)param_1;
      *param_2 = L'\0';
      uVar9 = 6;
      *(undefined8 *)(param_1 + *(long *)(lVar8 + -0x18) + 0x10) = 0;
    }
    else {
      lVar12 = 0;
      do {
                    /* try { // try from 00674380 to 006743aa has its CatchHandler @ 00674533 */
        cVar4 = (**(code **)(*(long *)pcVar7 + 0x10))(pcVar7,0x2000,wVar6);
        if (cVar4 != '\0') {
          lVar8 = *(long *)param_1;
          uVar9 = 4;
          lVar11 = *(long *)(lVar8 + -0x18);
          *param_2 = L'\0';
          *(undefined8 *)(param_1 + lVar11 + 0x10) = 0;
          if (lVar12 == 0) goto LAB_006743e5;
          goto LAB_006743f4;
        }
        pwVar10 = param_2 + 1;
        piVar2 = (int *)plVar1[2];
        lVar12 = lVar12 + 1;
        *param_2 = wVar6;
        if (piVar2 < (int *)plVar1[3]) {
          iVar5 = *piVar2;
          plVar1[2] = (long)(piVar2 + 1);
          if (iVar5 != -1) goto LAB_0067434f;
LAB_006743b0:
          lVar8 = *(long *)param_1;
          lVar3 = *(long *)(lVar8 + -0x18);
          if (lVar12 < lVar11) {
            *pwVar10 = L'\0';
            uVar9 = 2;
            *(undefined8 *)(param_1 + lVar3 + 0x10) = 0;
            goto LAB_006743e5;
          }
LAB_00674453:
          lVar8 = *(long *)(lVar8 + -0x18);
          *pwVar10 = L'\0';
          *(undefined8 *)(param_1 + lVar8 + 0x10) = 0;
          goto LAB_006743f4;
        }
        iVar5 = (**(code **)(*plVar1 + 0x50))(plVar1);
        if (iVar5 == -1) goto LAB_006743b0;
LAB_0067434f:
        if ((wchar_t *)plVar1[2] < (wchar_t *)plVar1[3]) {
          wVar6 = *(wchar_t *)plVar1[2];
        }
        else {
                    /* try { // try from 00674436 to 00674438 has its CatchHandler @ 00674533 */
          wVar6 = (**(code **)(*plVar1 + 0x48))(plVar1);
        }
        if (lVar12 == lVar11) {
          lVar8 = *(long *)param_1;
          goto LAB_00674453;
        }
        param_2 = pwVar10;
      } while (wVar6 != L'\xffffffff');
      lVar8 = *(long *)param_1;
      *pwVar10 = L'\0';
      uVar9 = 2;
      *(undefined8 *)(param_1 + *(long *)(lVar8 + -0x18) + 0x10) = 0;
    }
  }
LAB_006743e5:
  wios::clear((wios *)(param_1 + *(long *)(lVar8 + -0x18)),
              uVar9 | *(uint *)((wios *)(param_1 + *(long *)(lVar8 + -0x18)) + 0x20));
LAB_006743f4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


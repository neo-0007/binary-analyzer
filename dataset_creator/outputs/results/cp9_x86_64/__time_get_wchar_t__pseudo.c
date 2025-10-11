
/* std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   std::__facet_shims::__time_get<wchar_t>(std::integral_constant<bool, true>, std::locale::facet
   const*, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&,
   std::_Ios_Iostate&, tm*, char) */

void std::__facet_shims::__time_get<wchar_t>(long *param_1)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  byte in_stack_00000018;
  
  uVar1 = in_stack_00000018 - 100 & 0xff;
  lVar2 = (long)(int)(&switchD_0064f1b8::caseD_16)[uVar1];
  piVar3 = (int *)((long)&switchD_0064f1b8::caseD_16 + lVar2);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0064f21a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x0064f232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))();
    return;
  case 9:
                    /* WARNING: Could not recover jumptable at 0x0064f202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x0064f1ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  case 0x13:
                    /* WARNING: Could not recover jumptable at 0x0064f1d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))();
    return;
  case 0x16:
  case 0x17:
    *(int *)(lVar2 + -0x7e7ed2b8) = *(int *)(lVar2 + -0x7e7ed2b8) + 1;
    *(int *)(lVar2 + -0x7e7ed2b8) = *(int *)(lVar2 + -0x7e7ed2b8) + 1;
    *(int *)(lVar2 + -0x7e7ed2b8) = *(int *)(lVar2 + -0x7e7ed2b8) + 1;
    *(int *)(lVar2 + 0x51812d48) = *(int *)(lVar2 + 0x51812d48) + 1;
    *(int *)(lVar2 + -0x7e7ed2b8) = *(int *)(lVar2 + -0x7e7ed2b8) + 1;
    *(int *)(lVar2 + -0x7e7ed2b8) = *(int *)(lVar2 + -0x7e7ed2b8) + 1;
    *(int *)(lVar2 + -0x7e7ed2b8) = *(int *)(lVar2 + -0x7e7ed2b8) + 1;
    *piVar3 = *piVar3 + 1;
    *(int *)(lVar2 + -0x7e7ed2b8) = *(int *)(lVar2 + -0x7e7ed2b8) + 1;
                    /* WARNING: Could not emulate address calculation at 0x008149eb */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)piVar3)();
    return;
  }
}


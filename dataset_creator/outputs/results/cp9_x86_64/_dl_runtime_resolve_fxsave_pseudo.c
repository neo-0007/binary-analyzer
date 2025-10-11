
void _dl_runtime_resolve_fxsave
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_retaddr;
  undefined1 auStack_210 [520];
  
  _fxsave(auStack_210);
  UNRECOVERED_JUMPTABLE = (code *)_dl_fixup(unaff_retaddr,param_7);
  _fxrstor(auStack_210);
                    /* WARNING: Could not recover jumptable at 0x00781b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


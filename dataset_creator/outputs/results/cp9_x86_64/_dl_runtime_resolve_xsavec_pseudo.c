
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dl_runtime_resolve_xsavec
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 in_RAX;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_retaddr;
  undefined8 auStack_48 [8];
  
  lVar1 = -_DAT_0093e000;
  *(undefined8 *)((long)auStack_48 + lVar1 + 8) = in_RAX;
  *(undefined8 *)((long)auStack_48 + lVar1 + 0x10) = param_4;
  *(undefined8 *)((long)auStack_48 + lVar1 + 0x18) = param_3;
  *(undefined8 *)((long)auStack_48 + lVar1 + 0x20) = param_2;
  *(undefined8 *)((long)auStack_48 + lVar1 + 0x28) = param_1;
  *(undefined8 *)((long)auStack_48 + lVar1 + 0x30) = param_5;
  *(undefined8 *)((long)auStack_48 + lVar1 + 0x38) = param_6;
  *(undefined8 *)(&stack0x00000210 + lVar1) = 0;
  *(undefined8 *)(&stack0x00000218 + lVar1) = 0;
  *(undefined8 *)(&stack0x00000220 + lVar1) = 0;
  *(undefined8 *)(&stack0x00000228 + lVar1) = 0;
  *(undefined8 *)(&stack0x00000230 + lVar1) = 0;
  *(undefined8 *)(&stack0x00000238 + lVar1) = 0;
  xsavec((long)&stack0x00000000 + lVar1,0x200);
  *(undefined8 *)((long)auStack_48 + lVar1) = 0x781cce;
  UNRECOVERED_JUMPTABLE = (code *)_dl_fixup(unaff_retaddr,param_7);
  xrstor((long)&stack0x00000000 + lVar1,0x200);
                    /* WARNING: Could not recover jumptable at 0x00781d0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)((long)auStack_48 + lVar1 + 0x28),
             *(undefined8 *)((long)auStack_48 + lVar1 + 0x20),
             *(undefined8 *)((long)auStack_48 + lVar1 + 0x18),
             *(undefined8 *)((long)auStack_48 + lVar1 + 0x10),
             *(undefined8 *)((long)auStack_48 + lVar1 + 0x30),
             *(undefined8 *)((long)auStack_48 + lVar1 + 0x38));
  return;
}


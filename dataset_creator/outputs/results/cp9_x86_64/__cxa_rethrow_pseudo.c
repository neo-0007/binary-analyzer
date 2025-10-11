
void __cxa_rethrow(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)__cxa_get_globals();
  puVar1 = (undefined8 *)*puVar2;
  *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(puVar1[10] + 0xb8b1aabcbcd4d500);
    if (puVar3 < &_nl_current_LC_PAPER_used) {
      puVar3 = (undefined8 *)*puVar1;
      *(int *)(puVar1 + 5) = -*(int *)(puVar1 + 5);
      if ((puVar1[10] & 1) == 0) {
        puVar3 = puVar1 + 0xe;
      }
    }
    else {
      *puVar2 = 0;
    }
    _Unwind_Resume_or_Rethrow(puVar1 + 10,param_2,puVar3);
    __cxa_begin_catch(puVar1 + 10);
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


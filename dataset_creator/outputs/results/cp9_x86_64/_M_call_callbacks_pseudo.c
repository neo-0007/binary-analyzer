
/* std::ios_base::_M_call_callbacks(std::ios_base::event) */

void __thiscall std::ios_base::_M_call_callbacks(ios_base *this,undefined4 param_2)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(this + 0x28); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
                    /* try { // try from 0066d109 to 0066d10b has its CatchHandler @ 0066d119 */
    (*(code *)puVar1[1])(param_2,this,*(undefined4 *)(puVar1 + 2));
  }
  return;
}


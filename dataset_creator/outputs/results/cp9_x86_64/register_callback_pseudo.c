
/* std::ios_base::register_callback(void (*)(std::ios_base::event, std::ios_base&, int), int) */

void __thiscall
std::ios_base::register_callback
          (ios_base *this,_func_void_event_ios_base_ptr_int *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(this + 0x28);
  puVar2[1] = param_1;
  *puVar2 = uVar1;
  *(int *)(puVar2 + 2) = param_2;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  *(undefined8 **)(this + 0x28) = puVar2;
  return;
}


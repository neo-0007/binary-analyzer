
/* WARNING: Removing unreachable block (ram,0x006c5c78) */

void __register_frame_info_table_bases
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_2 = 0xffffffffffffffff;
  param_2[1] = param_3;
  param_2[2] = param_4;
  param_2[3] = param_1;
  param_2[4] = 0x7fa;
  pthread_mutex_lock((pthread_mutex_t *)object_mutex);
  puVar1 = param_2;
  param_2[5] = unseen_objects;
  unseen_objects = puVar1;
  if (any_objects_registered == 0) {
    any_objects_registered = 1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)object_mutex);
  return;
}


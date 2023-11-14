#include "src/game/envfx_snow.h"

const GeoLayout waluigi_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ASM(0, geo_mirror_mario_backface_culling),
				GEO_ASM(0, geo_mirror_mario_set_alpha),
				GEO_SWITCH_CASE(0, geo_switch_mario_stand_run),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_SWITCH_CASE(0, geo_switch_mario_cap_effect),
						GEO_OPEN_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 204, 0, waluigi_000_offset_butt_mesh_layer_1),
									GEO_OPEN_NODE(),
										GEO_ASM(0, geo_move_mario_part_from_parent),
										GEO_ASM(0, geo_mario_tilt_torso),
										GEO_ROTATION_NODE(LAYER_FORCE, 0, -1, -1),
										GEO_OPEN_NODE(),
											GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 48, 0, 0, 0, 3, 3),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, waluigi_000_offset_torso_mesh_layer_1),
												GEO_OPEN_NODE(),
													GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 162, -5, 5, 0, -2, -2),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
														GEO_OPEN_NODE(),
															GEO_ASM(0, geo_mario_head_rotation),
															GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
															GEO_OPEN_NODE(),
																GEO_SWITCH_CASE(0, geo_switch_mario_cap_on_off),
																GEO_OPEN_NODE(),
																	GEO_NODE_START(),
																	GEO_OPEN_NODE(),
																		GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
																		GEO_OPEN_NODE(),
																			GEO_NODE_START(),
																			GEO_OPEN_NODE(),
																				GEO_DISPLAY_LIST(LAYER_OPAQUE, waluigi_000_displaylist_cap_on_mesh_layer_1),
																			GEO_CLOSE_NODE(),
																		GEO_CLOSE_NODE(),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
																GEO_TRANSLATE_ROTATE(LAYER_FORCE, 121, -44, -107, 15, -33, -133),
																GEO_OPEN_NODE(),
																	GEO_ASM(0, geo_mario_rotate_wing_cap_wings),
																	GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
																	GEO_OPEN_NODE(),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
																GEO_TRANSLATE_ROTATE(LAYER_FORCE, 121, -44, 107, -15, 33, -133),
																GEO_OPEN_NODE(),
																	GEO_ASM(1, geo_mario_rotate_wing_cap_wings),
																	GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
																	GEO_OPEN_NODE(),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
													GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 133, -14, 65, 0, -2, -2),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
														GEO_OPEN_NODE(),
															GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, -2, -2),
															GEO_OPEN_NODE(),
																GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, waluigi_000_offset_left_upperarm_mesh_layer_1),
																GEO_OPEN_NODE(),
																	GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 123, 3, -3, 0, 2, 2),
																	GEO_OPEN_NODE(),
																		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, waluigi_000_offset_left_forearm_mesh_layer_1),
																		GEO_OPEN_NODE(),
																			GEO_SWITCH_CASE(1, geo_switch_mario_hand),
																			GEO_OPEN_NODE(),
																				GEO_NODE_START(),
																				GEO_OPEN_NODE(),
																					GEO_ANIMATED_PART(LAYER_OPAQUE, 122, 0, 0, NULL),
																					GEO_OPEN_NODE(),
																						GEO_ASM(1, geo_mario_hand_foot_scaler),
																						GEO_SCALE(LAYER_FORCE, 65536),
																						GEO_OPEN_NODE(),
																							GEO_DISPLAY_LIST(LAYER_OPAQUE, waluigi_000_displaylist_left_hand_closed_mesh_layer_1),
																						GEO_CLOSE_NODE(),
																					GEO_CLOSE_NODE(),
																				GEO_CLOSE_NODE(),
																			GEO_CLOSE_NODE(),
																		GEO_CLOSE_NODE(),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
													GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 138, -14, -55, 0, -2, -2),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
														GEO_OPEN_NODE(),
															GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, -2, -2),
															GEO_OPEN_NODE(),
																GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, waluigi_000_offset_right_upperarm_mesh_layer_1),
																GEO_OPEN_NODE(),
																	GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 123, 3, -3, 0, 2, 2),
																	GEO_OPEN_NODE(),
																		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, waluigi_000_offset_right_forearm_mesh_layer_1),
																		GEO_OPEN_NODE(),
																			GEO_SWITCH_CASE(0, geo_switch_mario_hand),
																			GEO_OPEN_NODE(),
																				GEO_NODE_START(),
																				GEO_OPEN_NODE(),
																					GEO_ANIMATED_PART(LAYER_OPAQUE, 122, 0, 0, NULL),
																					GEO_OPEN_NODE(),
																						GEO_ASM(0, geo_mario_hand_foot_scaler),
																						GEO_SCALE(LAYER_FORCE, 65536),
																						GEO_OPEN_NODE(),
																							GEO_DISPLAY_LIST(LAYER_OPAQUE, waluigi_000_displaylist_right_hand_closed_mesh_layer_1),
																						GEO_CLOSE_NODE(),
																						GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
																					GEO_CLOSE_NODE(),
																				GEO_CLOSE_NODE(),
																			GEO_CLOSE_NODE(),
																		GEO_CLOSE_NODE(),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 11, -7, 36, NULL),
										GEO_OPEN_NODE(),
											GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, -1, -1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, waluigi_000_offset_left_thigh_mesh_layer_1),
												GEO_OPEN_NODE(),
													GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 177, 3, -3, 0, 3, 3),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, waluigi_000_offset_left_leg_mesh_layer_1),
														GEO_OPEN_NODE(),
															GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 186, -6, 6, -2, -3, -3),
															GEO_OPEN_NODE(),
																GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, waluigi_000_offset_left_foot_mesh_layer_1),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 11, -7, -36, NULL),
										GEO_OPEN_NODE(),
											GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, -1, -1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, waluigi_000_offset_right_thigh_mesh_layer_1),
												GEO_OPEN_NODE(),
													GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 177, 3, -3, 0, 3, 3),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, waluigi_000_offset_right_leg_mesh_layer_1),
														GEO_OPEN_NODE(),
															GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 186, -6, 6, 0, -2, -2),
															GEO_OPEN_NODE(),
																GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
																GEO_OPEN_NODE(),
																	GEO_ASM(2, geo_mario_hand_foot_scaler),
																	GEO_SCALE(LAYER_FORCE, 65536),
																	GEO_OPEN_NODE(),
																		GEO_DISPLAY_LIST(LAYER_OPAQUE, waluigi_000_displaylist_right_foot_mesh_layer_1),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_ASM(1, geo_mirror_mario_backface_culling),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, waluigi_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
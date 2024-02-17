#include "pch.h"
#include "RL_Video_Replay.h"

/* Plugin Settings Window code here
std::string RL_Video_Replay::GetPluginName() {
	return "RL_Video_Replay";
}

void RL_Video_Replay::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> RL_Video_Replay
void RL_Video_Replay::RenderSettings() {
	ImGui::TextUnformatted("RL_Video_Replay plugin settings");
}
*/

/*
// Do ImGui rendering here
void RL_Video_Replay::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string RL_Video_Replay::GetMenuName()
{
	return "rl_video_replay";
}

// Title to give the menu
std::string RL_Video_Replay::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void RL_Video_Replay::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool RL_Video_Replay::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool RL_Video_Replay::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void RL_Video_Replay::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void RL_Video_Replay::OnClose()
{
	isWindowOpen_ = false;
}
*/
